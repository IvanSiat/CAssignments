#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 2 - Question 2
	**/ 

int main(void)
{
  int itemNumber;
  float unitPrice;
  char purchaseDate[10];
  
  printf("Enter item number: ");
  scanf("%d", &itemNumber);
  
  printf("Enter unit price: ");
  scanf("%f", &unitPrice);
  
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%s", &purchaseDate);
  
  printf("Item		Unit		Purchase\n		Price		Date\n%d		$  %.2f	%s", itemNumber, unitPrice, purchaseDate);
  
  
  return 0;
}