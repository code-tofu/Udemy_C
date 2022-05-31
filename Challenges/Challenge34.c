/* Challenge 34 Print the Area of a Rectangle
Create Variables to store the width, height, perimeter and area of a rectangle. All type double
Calculate and print area and petimeter
Print with line feeds

  */
#include <stdio.h>

int main() {

// Declare and initialise variables
double width=0.0, height =0.0, perimeter =0.0, area =0.0;

//Read variables
printf("Input Width:");
scanf("%lf", &width);
printf("Input Height:");
scanf("%lf", &height);  
//Remember that you are scanf to a variable address

//Computation
perimeter = 2 *(width + height);
area = width * height;

  
//Print Perimeter and Area
printf("For a rectangle of width: %lf and height: %lf the perimeter is %lf and the area is %lf", width,height,perimeter,area);

//Print Perimeter and Area to 2dec
printf("For a rectangle of width: %.2lf and height: %.2lf the perimeter is %.2lf and the area is %.2lf", width,height,perimeter,area);

  return 0;
}
  