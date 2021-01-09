#include <stdio.h>
#include <math.h>

/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 6 - Question 2
	**/ 
int main(void) {
    
    double x, y = 1, avg;
	
	printf("Enter a positive number: ");
	scanf("%lf", &x);
	
	avg = (y + (x/y)) / 2;
	while (((fabs(y - avg)) > (0.00001f * avg))){
		
		y = avg;
		printf("Average of y and x/: %.5lf\n", y);
		
		avg = (y + (x/y)) / 2;
	}
		
    return 0;
    
}
