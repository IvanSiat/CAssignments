#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 3 - Question 1
	**/ 
	
int main(void)
{	int num, firstNum, secondNum;

	printf("Enter a two-digit number: ");
	scanf ("%d", &num);
	
	firstNum = num / 10;
    secondNum = num % 10;
	
	printf("The reversal is: %d%d", secondNum, firstNum);

  return 0;
}