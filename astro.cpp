#include <iostream>
#include <boost/astronomy/coordinate/cartesian_representation.hpp>
#include <boost/units/systems/si/length.hpp>
#include <boost/units/io.hpp>

using namespace boost::astronomy::coordinate;
using namespace boost::units;
using namespace boost::units::si;

typedef boost::geometry::model::point<double, 3, boost::geometry::cs::spherical<boost::geometry::degree>> geometry_point;

int main()
{
    //creating point without any value
    cartesian_representation<double, quantity<si::length>, quantity<si::length>, quantity<si::length>> point1;

    //creating a point by directly providing values of x, y and z
    auto point2 = make_cartesian_representation(10.0 * meter, 20.0 * meter, 30.0 * meter);

    //assigning value of individual component
    point1.set_x(50.0 * meter);
    point1.set_y(40.0 * meter);
    point1.set_z(880.0 * meter);

    //or to set all the values in single statement tuple could be used as follow
    point2.set_x_y_z(38.5 * meter, 50.0 * meter, 64.23 * meter);

    //creating a point from another point
    auto point3 = make_cartesian_representation(point2);

    //creating a point from boost::geometry::model::point
    //any type of point can be used here
    //here we will demonstrate with cartesian point
    //https://www.boost.org/doc/libs/1_71_0/libs/geometry/doc/html/geometry/reference/models/model_point.html
    //https://www.boost.org/doc/libs/1_71_0/libs/geometry/doc/html/geometry/reference/cs.html
    geometry_point gp(45.0, 60.0, 50.0);
    auto point4 = make_cartesian_representation<double, quantity<si::length>, quantity<si::length>, quantity<si::length>>(gp);

    //accessing each component of representation
    std::cout << point4.get_x() << point4.get_y()<<std::endl; //methods get_y and get_z are available

    //get boost::geometry::model::point of current object
    auto stored_point = point3.get_point();

    //get the tuple of the component in the coordinate
    std::tuple<quantity<si::length>, quantity<si::length>, quantity<si::length>>
        components = point3.get_x_y_z();

    std::cin.get();
    return 0;
}