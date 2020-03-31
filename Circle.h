#pragma once

#include "Shape2D.h"


#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape2D
{

};

//Declare the derived class Circle below



/*
Circle
with the following additional members:

one protected member variable, radius (float)

the corresponding accessor and mutator to access and modify the above protected member radius (already given)

the constructor that takes three parameters as input with the order of the x and y coordinates of the center and the radius of the circle. The constructor should call the constructor of Shape2D to properly initialize the center coordinates.

a public function to compute and the area of a circle and set the area to the variable area inherited from Shape2D

void compArea(); // assume area = 3.14radiusradius;
override the function printArea() from the Shape2D to output the following The area of the circle is <the computed area>. use << fixed << setPrecision(2)

From the above Circle class, derive a new class:*/

#endif