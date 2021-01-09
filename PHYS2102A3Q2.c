#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 3 - Question 2
	**/ 
	
int main(void)
{	int num;

	printf("Enter a number: ");
	scanf ("%d", &num);
	
	if (num >= 0 && num <=9){
		printf("the number %d has 1 digit", num);
	}
	
	else if (num >= 10 && num <= 99){
		printf("the number %d has 2 digits", num);
	}
	
	else if (num >=100 && num <= 999){
		printf("the number %d has 3 digits", num);
	}
	
	else if (num >=1000 && num <= 9999){
		printf("the number %d has 4 digits", num);
	}
	
  
  return 0;
}