#include <iostream>
#include <boost/gil/extension/io/jpeg/old.hpp>
#include <boost/gil.hpp>

using namespace boost::gil;

void imagemixer()
{
    rgb8_image_t kri, avi, mixed(1000, 1333);
    read_image("krish.jpg", kri, jpeg_tag{});
    read_image("dawn.jpg", avi, jpeg_tag{});
    
    rgb8_image_t::view_t v = view(kri), w = view(avi), x = view(mixed);
    rgb8_pixel_t pix;
    for (int i = 0; i < 1333; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 1000; j++)
            {
                if (j % 2 == 0)
                {
                    pix = v(j, i);
                }
                else
                {
                    pix = w(j, i);
                }
                x(j, i) = pix;
            }
        }
        else
        {
            for (int j = 0; j < 1000; j++)
            {
                if (j % 2 == 0)
                {
                    pix = w(j, i);
                }
                else
                {
                    pix = v(j, i);
                }
                x(j, i) = pix;
            }
        }
        jpeg_write_view("krishdn.jpeg", x);
    }
}

int main(int argc, char const *argv[])
{
    imagemixer();
    return 0;
}
