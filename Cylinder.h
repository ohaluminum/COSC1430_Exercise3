#pragma once

#include "Circle.h"


#ifndef CYLINDER_H
#define CYLINDER_H

//Declare the derived class Cylinder below
class Cylinder : public Circle
{
public:
	Cylinder();
	Cylinder(float cx, float cy, float r, float h);
	float getHeight();
	void setHeight(float h);
	void compArea() override;
	void printArea() override;

private:
	float height;
};


#endif
