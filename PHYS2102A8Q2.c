#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 8 - Question 2
	**/ 
	

int polyEquation(int x);
int main(void){
    int x;
	
    printf("Enter a value for x: ");
    scanf("%d", &x);
	
    printf("%d", polyEquation(x));
	
    return 0;
}

int polyEquation(int x) //function
{
	return ((3 *(x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x *x)) - (x * x) + (7 * (x)) - 6);
}

