#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 3 - Question 3
	**/ 
	
int main(void)
{

  int firstDateMonth, firstDateDay,firstDateYear, secondDateMonth, secondDateDay, secondDateYear;
  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &firstDateMonth, &firstDateDay, &firstDateYear);
  
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &secondDateMonth, &secondDateDay, &secondDateYear);
  
	
	//If year is over 2020, assume its referring to 1900s or before
	if (firstDateYear > 20 || secondDateYear > 20){
		if (firstDateYear > secondDateYear){
		printf ("%d/%d/%d is earlier than %d/%d/%d", firstDateMonth, firstDateDay, firstDateYear, secondDateMonth,secondDateDay,secondDateYear);
		}
	else if (firstDateYear < secondDateYear){
		printf ("%d/%d/%d is earlier than %d/%d/%d", secondDateMonth,secondDateDay,secondDateYear,firstDateMonth, firstDateDay, firstDateYear );
	  }
	}
	  
	  //else, compare normally
	else if(firstDateYear < secondDateYear){
		printf ("%d/%d/%d is earlier than %d/%d/%d", firstDateMonth, firstDateDay, firstDateYear, secondDateMonth,secondDateDay,secondDateYear);
		}
	else if (firstDateYear > secondDateYear){
		printf ("%d/%d/%d is earlier than %d/%d/%d", secondDateMonth,secondDateDay,secondDateYear,firstDateMonth, firstDateDay, firstDateYear );
	  }
	
	
	  //month comparison
	else if (firstDateMonth < secondDateMonth) {
		printf ("%d/%d/%d is earlier than %d/%d/%d", firstDateMonth, firstDateDay, firstDateYear, secondDateMonth,secondDateDay,secondDateYear);
	}
	else if (firstDateMonth > secondDateMonth) {
		printf ("%d/%d/%d is earlier than %d/%d/%d", secondDateMonth,secondDateDay,secondDateYear,firstDateMonth, firstDateDay, firstDateYear );
	}
	
	
	//day comparison
	else if (firstDateDay < secondDateDay){
		printf ("%d/%d/%d is earlier than %d/%d/%d", firstDateMonth, firstDateDay, firstDateYear, secondDateMonth,secondDateDay,secondDateYear);
	}
	else if (firstDateDay > secondDateDay) {
		printf ("%d/%d/%d is earlier than %d/%d/%d", secondDateMonth,secondDateDay,secondDateYear,firstDateMonth, firstDateDay, firstDateYear );
	}
  
  
  
  return 0;
}