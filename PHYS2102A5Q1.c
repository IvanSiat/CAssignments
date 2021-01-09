#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 5 - Question 1
	**/ 

int main(void)
{	int firstDateMonth, firstDateDay,firstDateYear, earliestDateMonth, earliestDateDay, earliestDateYear;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &firstDateMonth, &firstDateDay, &firstDateYear);
	earliestDateMonth = firstDateMonth;
	earliestDateDay = firstDateDay;
	earliestDateYear = firstDateYear;
	
	while(firstDateMonth > 0 && firstDateDay > 0 && firstDateYear > 0){
	 
	  //else, compare normally
	if(firstDateYear < earliestDateYear){
		earliestDateMonth = firstDateMonth;
		earliestDateDay = firstDateDay;
		earliestDateYear = firstDateYear;
	}
	
	
	  //month comparison
	else if (firstDateMonth < earliestDateMonth) {
		earliestDateMonth = firstDateMonth;
		earliestDateDay = firstDateDay;
		earliestDateYear = firstDateYear;
	}
	
	//if date months the same, compare days
	else if (firstDateMonth == earliestDateMonth){
		if (firstDateDay < earliestDateDay){
			earliestDateMonth = firstDateMonth;
		earliestDateDay = firstDateDay;
		earliestDateYear = firstDateYear;
		}
		
	}

		printf("Enter first date (mm/dd/yy): ");
		scanf("%d/%d/%d", &firstDateMonth, &firstDateDay, &firstDateYear);
	}
	
	printf("The earliest date entered was %d/%d/%d", earliestDateMonth, earliestDateDay, earliestDateYear);

  return 0;
}