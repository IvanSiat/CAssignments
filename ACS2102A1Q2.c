#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 1 - Question 2
	**/ 
	
int main( void ) {
	float pi = 3.14159; // pi
	float radius  = 1.2; // meters
	
	float areaCircle = pi * (radius * radius);  // square meters

	printf( "The area of a circle having a radius of %f meters is %f square meters.\n", radius, areaCircle);

	return 0;
}