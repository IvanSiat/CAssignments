#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 4 - Question 2
	**/ 
	
int main(void)
{	int num, firstNum, secondNum;
	printf("Enter a two-digit number: ");
	scanf ("%d", &num);
	
	firstNum = num / 10;
    secondNum = num % 10;
	
	printf("You entered the number ");
	
	//special treatment for printing numbers between 10 to 19
	if (num > 9 && num <20){
	switch(num){
		case 10:  printf("ten"); break;
		case 11:  printf("eleven"); break;
		case 12:  printf("twelve"); break;
		case 13:  printf("thirteen"); break;
		case 14: printf("fourteen"); break;
		case 15: printf("fifteen"); break;
		case 16:printf("sixteen"); break;
		case 17: printf("seventeen"); break;
		case 18: printf("eighteen"); break;
		case 19: printf("nineteen"); break;
	}
	}
	
	// else if number is 0, print zero
	else if (num == 0){
	printf("zero");
	}
	
	//else, use firstNum to determine the first part of the word..
	else{
	switch (firstNum){
		case 2:  printf("twenty"); break;
		case 3:  printf("thirty"); break;
		case 4: printf("forty"); break;
		case 5: printf("fifty"); break;
		case 6:printf("sixty"); break;
		case 7: printf("seventy"); break;
		case 8: printf("eighty"); break;
		case 9: printf("ninety"); break;
		
		
	}
	// ... and use secondNum to determine the second part of the word
	switch (secondNum) {
		case 1:  printf("one"); break;
		case 2:  printf("two"); break;
		case 3:  printf("three"); break;
		case 4: printf("four"); break;
		case 5: printf("five"); break;
		case 6: printf("six"); break;
		case 7: printf("seven"); break;
		case 8: printf("eight"); break;
		case 9: printf("nine"); break;
		
	}
	}
	

  return 0;
}