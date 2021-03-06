#pragma once

#include <iostream>
#include <iomanip>

using namespace std;

#ifndef SHAPE2D_H
#define SHAPE2D_H

class Shape2D
{
public:
    Shape2D (float cx = 0, float cy = 0)
        : center_x(cx), center_y(cy), area(0.0)
    {
     
    }

    float getCenter_x() 
    { 
        return center_x; 
    }

    float getCenter_y() 
    { 
        return center_y; 
    }

    float getArea() 
    { 
        return area; 
    }

    void setCenter(float cx = 0, float cy = 0)
    {   
        center_x = cx; 
        center_y = cy;
    }

    void setArea(float a) 
    { 
        area = a;
    }

    virtual void printArea() 
    { 
        cout << "No area computed!" << endl;
    }

private:
    float center_x;
    float center_y;
    float area;
};

#endif