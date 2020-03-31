# COSC1430_Exercise3

    Given the Shape2D class (see the provided Shape2D.h), implement a derived class:

Circle

    With the following additional members:

    ·One protected member variable, radius (float)

    ·The corresponding accessor and mutator to access and modify the above protected member radius (already given)

    ·The constructor that takes three parameters as input with the order of the x and y coordinates of the center and the radius of the circle. The constructor should call the constructor of Shape2D to properly initialize the center coordinates.

    ·A public function to compute and the area of a circle and set the area to the variable area inherited from Shape2D

      -void compArea(); 
      -using the following formula area = 3.14 * radius * radius

    ·override the function printArea() from the Shape2D to output the following The area of the circle is <the computed area>. 
     
      -use << fixed << setprecision(2)

From the above Circle class, derive a new class:

Cylinder

    With the following additional members:

    ·One private member variable, height (float)

    ·The corresponding accessor and mutator to access and modify the above private member height (already given)

    ·The constructor that takes four parameters as input with the order of the x and y coordinates of the center, the radius of the base circle, and the height of the cylinder. The constructor should call the constructor of Circle to properly initialize the center coordinates and the radius of the base circle.

    ·Override the function void compArea() from the Circle class to compute the area of the cylinder 
    
      -using the following formula area = 2 * 3.14 * height * radius + 2 * 3.14 * radius * radius

    ·Override the function printArea() to output the following

      -The area of the cylinder is <the computed area>.    
      
Main

    A sample main() function is provided to you. However, there are some errors in the provided main() function. Please fix them so that it can be compiled and generate the expected output.
