#include <boost/units/systems/si/length.hpp>
#include <boost/units/systems/si/io.hpp>
#include <iostream>
using namespace boost::units;
using namespace boost::units::si;
using namespace std;
class vectorunit
{
  private:
    quantity<length> x;
    quantity<length> y;
    quantity<length> z;

  public:
    vectorunit(quantity<length> vx, quantity<length> vy, quantity<length> vz)
    {
        x = vx;
        y = vy;
        z = vz;
    }
    void display_vector()
    {
        cout << "(" << x << "," << y << "," << z << ")" << endl;
    }
};

int main(int argc, char const *argv[])
{
    double x1, y1, z1;
    cout << "Enter 1st vector coordinate" << endl;
    cin >> x1 >> y1 >> z1;
    quantity<length> nx(x1 * meters);
    quantity<length> ny(y1 * meters);
    quantity<length> nz(z1 * meters);
    vectorunit result_vector(nx,ny,nz);
    result_vector.display_vector();
        return 0;
}
