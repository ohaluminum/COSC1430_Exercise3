#include <iostream>
using namespace std;

#include "Cylinder.h"


int main()
{

   Shape2D s2d;
   s2d.printArea();
   
   Circle circ(3.4, -1, 3.0);
   
   // please fix the error below
   cout << "The center of the circle is: (" << circ.getCenter_x() << ", " << circ.getCenter_y() << ")." << endl;
   circ.compArea();
   circ.printArea();
   
   Circle *cyl = new Cylinder (5, 6, 7, 8);
   cyl->compArea();
   cyl->printArea();
      
   return 0;
}
