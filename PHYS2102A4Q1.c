#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 4 - Question 1
	**/ 
	
int main(void)
{
  int num1,num2,num3,num4, largest1, largest2, smallest1, smallest2, largestNum, smallestNum;
  
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
  
  if (num1 > num2){ //find largest and smallest number in first set (first 2 numbers)
	  largest1 = num1;
	  smallest1 = num2;
  }
  else {
	  largest1= num2;
	  smallest1 = num1;
  }
  
  
  
  if (num3 > num4){ //find largest and smallest number in second set (last 2 numbers)
	  largest2 = num3;
	  smallest2 = num4;
  }
  else {
	  largest2 = num4;
	  smallest2 = num3;
  }
  
  if (largest1>largest2) { //find largest number between the two sets' largest numbers
	  largestNum = largest1;
  }
  else {
	  largestNum = largest2;
  }
  
  if (smallest1<smallest2){ //find smallest number between the two sets' smallest numbers
	  smallestNum = smallest1;
  }
  else {
	  smallestNum = smallest2;
  }
  
  printf("Largest: %d \nSmallest: %d", largestNum, smallestNum);
  


  return 0;
}