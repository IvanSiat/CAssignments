#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 8 - Question 1
	**/ 
	
int main(void){
    char ch, charStop, sentence[500];
    int i, n, sentenceLength = 0, wordLength = 0;

	printf("Enter a sentence: "); 
    for (i = 0; (ch = getchar()) != '\n'; i++) { //take in characters
        if (ch == '.' || ch == '?' || ch == '!') { //if character is one of the terminating characters, break out
            charStop = ch;
            break;
		} 
		
		else { // else, put character in the sentence array, increase length of sentence
            sentence[i] = ch; 
            sentenceLength++;
        }
    }

    printf("Reversal of sentence: ");
    for (i = sentenceLength; i >= 0; i--) { //go through sentence array backwards 
        if (sentence[i] == ' ') { 
            for (n = i + 1; n <= i + wordLength + 1; n++){ //prints word 
                printf("%c", sentence[n]);
			}
            wordLength = 0; //need to reset wordLength to 0 to start over in the next word
        } 
		
		else {
            wordLength++;  //if its not a new word, add to the length of the current word
        }
    }
	
    printf("%c", charStop); //add the terminating character at the end

    return 0;
}