#include <boost/astronomy/io/extension_hdu.hpp>
#include <boost/astronomy/io/hdu.hpp>
#include <boost/astronomy/io/primary_hdu.hpp>
#include <boost/astronomy/io/binary_table.hpp>
#include <boost/astronomy/io/fits.hpp>
#include <boost/astronomy/io/table_extension.hpp>
#include <fstream>
using namespace boost::astronomy::io;
int main(int argc, char const *argv[])
{
    std::fstream file("table.fits");
    extension_hdu f(file);
    hdu c(file);
    
    system("pause");
    return 0;
}
