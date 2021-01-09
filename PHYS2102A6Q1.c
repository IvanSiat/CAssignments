#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 6 - Question 1
	**/ 
int main(void) {
    
    char string[100];
	int count = 0,i = 0;
	
	printf("Enter a sentence :");

	scanf("%[^\n]s", &string);
	
	 while (string[i] != '\0') {
	
		switch(string[i]){
			case 'a': count++; break;
			case 'A': count++; break;
			case 'e': count++; break;
			case 'E': count++; break;
			case 'i': count++; break;
			case 'I': count++; break;
			case 'o': count++; break;
			case 'O': count++; break;
			case 'u': count++; break;
			case 'U': count++; break;
		}
		 i++;
	}
	
	printf("Your sentence countains %d vowels.", count);
    return 0;
}
