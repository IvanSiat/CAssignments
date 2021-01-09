#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 6 - Question 3
	**/ 
	
int main(void) {
	
	int i, num;
	short factorial = 1;
	
	printf ("Enter a positive integer: ");
	scanf("%d", &num);
	
	for (i=1; i<= num; i++){
		factorial *= i;
	}
	
	printf ("Factor of %d: %hi", num, factorial);
	
	/* a.) short = 7
	   b.) int = 12
	   c.) long = 12
	   d.) long long = 12
	   e.) float = 34
	   f.) double = 170
	   g.) long double = 0
	
	*/
    
    
    return 0;
}
