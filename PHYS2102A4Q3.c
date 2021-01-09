#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 4 - Question 3
	**/ 
	
int main(void)
{	float num, largestNum;

	printf("Enter a number: ");
	scanf("%f", &num);
	largestNum = num;
	
	while(num > 0){
		if(num > largestNum){
			largestNum = num;
		}
		
		printf("Enter a number: ");
		scanf("%f", &num);
	}
	
	printf("The largest number entered was %.2f", largestNum);

  return 0;
}