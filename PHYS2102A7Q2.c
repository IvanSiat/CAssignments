#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 7 - Question 2
	**/ 
	
int main(void){
    char letter;
	int i, letterCounter[26] = {0};
	bool anagram = true;
	
	
	printf("Enter first word: ");
	for (i = 0; (letter=getchar()) != '\n'; i++){
		if (isalpha != 0){
			letterCounter[toupper(letter) - 'A']++;
		}
	}
		
	printf("Enter second word: ");
	for (i = 0; (letter=getchar()) != '\n'; i++){
		if (isalpha != 0){
			letterCounter[toupper(letter) - 'A']--;
		}
	}
	
	
	for (i = 0; i < 26; i++){
		if (letterCounter[i] != 0) {
			anagram = false;
		}
	}
	
	
	if (anagram){
		printf("The words are anagrams.");
	}
	else{
		printf("The words are not anagrams.");
	}
	
	return 0;
}