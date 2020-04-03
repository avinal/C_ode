#include <iostream>
#include <vector>
#include <cfitsio/fitsio.h>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <iterator>
#include <string>

int main(int argc, char const *argv[])
{
    fitsfile *fptr; /* FITS file pointer, defined in fitsio.h */
    int status = 0; /* CFITSIO status value MUST be initialized to zero! */
    int bitpix, naxis, ii, anynul;
    long naxes[2] = {1, 1}, fpixel[2] = {1, 1};
    double *pixels;
    char format[20], hdformat[20];
    std::vector<double> parsed;
    /*if (argc != 2)
    {
        printf("Usage:  imlist filename[ext][section filter] \n");
        printf("\n");
        printf("List the the pixel values in a FITS image \n");
        printf("\n");
    }*/

    if (!fits_open_file(&fptr, "hub1.fit", READONLY, &status))
    {
        if (!fits_get_img_param(fptr, 2, &bitpix, &naxis, naxes, &status))
        {
            if (naxis > 2 || naxis == 0)
                printf("Error: only 1D or 2D images are supported\n");
            else
            {
                /* get memory for 1 row */
                pixels = new double[naxes[0]*sizeof(double)];

                if (pixels == NULL)
                {
                    printf("Memory allocation error\n");
                    return (1);
                }

                parsed.reserve(naxes[0] * naxes[1]);
                for (fpixel[1] = naxes[1]; fpixel[1] >= 1; fpixel[1]--)
                {
                    if (fits_read_pix(fptr, TDOUBLE, fpixel, naxes[0], NULL,
                                      pixels, NULL, &status)) /* read row of pixels */
                        break;                                /* jump out of loop on error */

                    for (ii = 0; ii < naxes[0]; ii++)
                    {
                        parsed.push_back(pixels[ii]);
                    } /* print each value  */
                }

                free(pixels);
            }
        }
        fits_close_file(fptr, &status);
    }

    if (status)
        fits_report_error(stderr, status); /* print any error message */

    for (long long i = 0; i < 512 * 512; i++)
        parsed[i] = static_cast<unsigned char>((parsed[i] + 4.83391) * 255.0 / (638.57791));

    std::ofstream output_file("example.txt");
    std::ostream_iterator<double> output_iterator(output_file, " ");
    std::copy(parsed.begin(), parsed.end(), output_iterator);
    return 0;
}