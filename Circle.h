#pragma once

#include "Shape2D.h"


#ifndef CIRCLE_H
#define CIRCLE_H

//Declare the derived class Circle below
class Circle : public Shape2D
{
public:
	Circle();
	Circle(float cx, float cy, float r);
	float getRadius();
	void setRadius(float _r);
	virtual void compArea();
	void printArea() override;

protected:
	float radius;
};

#endif