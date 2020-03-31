#include "Cylinder.h"


Cylinder::Cylinder()
    : Circle(0.0, 0.0, 0.0), height(0.0)
{

}

//The corresponding accessor and mutator to access and modify the above private member height (already given)
float Cylinder::getHeight()
{
   return height;
}

void Cylinder::setHeight(float h)
{
   height = h;
}


/*
 *Constructor with four parameters:
 *The constructor that takes four parameters as input with the order of the x and y coordinates of the center, the radius of the base circle, and the height of the cylinder. 
 *The constructor should call the constructor of Circle to properly initialize the center coordinates and the radius of the base circle.
 */
Cylinder::Cylinder(float cx, float cy, float r, float h)
    : Circle(cx, cy, r), height(h)
{

}

/*
 *Override compArea()
 *Override the function void compArea() from the Circle class to compute the area of the cylinder using the following formula 
 *area = 2 * 3.14 * height * radius + 2 * 3.14 * radius * radius;
 */
void Cylinder::compArea()
{
    float area = 2 * 3.14 * height * getRadius() + 2 * 3.14 * getRadius() * getRadius();
    setArea(area);
}

/*
 *Override printArea():
 *Output the following:
 *The area of the cylinder is <the computed area>.
 */
void Cylinder::printArea()
{
    cout << "The area of the cylinder is " << getArea() << fixed << setprecision(2) << endl;
}
