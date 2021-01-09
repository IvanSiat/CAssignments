#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 2 - Question 1
	**/ 
	
int main(void)
{
  int x, result;
  
  printf("Enter x value: ");
  scanf("%d", &x);
  
  result = (3*x +2) * (x-5) * (x-1) * (x+7) * (x-6);
  printf("The answer is %d.", result);

  return 0;
}