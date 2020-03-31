#include "Circle.h"


Circle::Circle()
    : Shape2D(0.0, 0.0), radius(0.0)
{

}

//The corresponding accessor and mutator to access and modify the above protected member radius (already given)
float Circle::getRadius()
{
   return radius;
}

void Circle::setRadius(float _r)
{
   radius = _r;
}

/*
 *Constructor with three parameters:
 *Takes three parameters as input with the order of the xand y coordinates of the centerand the radius of the circle.
 *The constructor should call the constructor of Shape2D to properly initialize the center coordinates.
 */
Circle::Circle(float cx, float cy, float r)
    : Shape2D(cx, cy), radius(r)
{

}

/*
 *Public member function compArea():
 *A public function to compute and the area of a circle and set the area to the variable area inherited from Shape2D
 */
void Circle::compArea()
{
    setArea(3.14 * radius * radius);
}

/*
 *Public member function printArea():
 *Override the function printArea() from the Shape2D to output the following.
 *The area of the circle is <the computed area>.
 *using << fixed << setprecision(2)
 */
void Circle::printArea()
{
    cout << "The area of the circle is " << getArea() << fixed << setprecision(2) << "." << endl;
}


