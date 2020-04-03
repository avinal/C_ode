#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
// this includes 12 of the CCfits headers and will support all CCfits operations.
// the installed location of the library headers is $(ROOT)/include/CCfits
// to use the library either add -I$(ROOT)/include/CCfits or #include <CCfits/CCfits>
// in the compilation target.
#include <CCfits/CCfits.h>
#include <cmath>
#include <iostream>
using namespace CCfits;
int main();

int writeImage();
int writeAscii();
int writeBinary();
int copyHDU();
int selectRows();
int readHeader();
int readImage();
int readTable();
int readExtendedSyntax();

int main()
{
    //FITS::setVerboseMode(true);
    try
    {
        if (!writeImage())
            std::cerr << " writeImage() \n";
        if (!writeAscii())
            std::cerr << " writeAscii() \n";
        if (!writeBinary())
            std::cerr << " writeBinary() \n";
        if (!copyHDU())
            std::cerr << " copyHDU() \n";
        if (!readHeader())
            std::cerr << " readHeader() \n";
        if (!readImage())
            std::cerr << " readImage() \n";
        if (!readTable())
            std::cerr << " readTable() \n";
        if (!readExtendedSyntax())
            std::cerr << " readExtendedSyntax() \n";
        if (!selectRows())
            std::cerr << " selectRows() \n";
    }
    catch (FitsException &) // will catch all exceptions thrown by CCfits, including errors // found by cfitsio (status != 0) {
    {
        std::cerr << " Fits Exception Thrown by test function \n";
    }
    return 0;
}
