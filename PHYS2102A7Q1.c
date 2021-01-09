#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 7 - Question 1
	**/ 
	
int main(void)
{
    char message[80], letter;
	int i, shiftAmount, length = 0;
	
	printf("Enter message to be encrypted: ");
	
	for (i = 0; (letter=getchar()) != '\n'; i++){
		message[i] = letter;
		length++;
	}
	
	printf("Enter shift amount (1-25): ");
	scanf("%d", &shiftAmount);
	
	printf("Encrypted message: ");
	for (i = 0; i < length; i++) {

        if (message[i] >= 'A' && message[i] <= 'Z') {
            printf("%c", ((message[i] - 'A') + shiftAmount) % 26 + 'A');
        }
		
        else if (message[i] >= 'a' && message[i] <= 'z') {
            printf("%c", ((message[i] - 'a') + shiftAmount) % 26 + 'a');
        }
		
        else {
            printf("%c", message[i]);
        }

    }
		
	return 0;
	
	
}