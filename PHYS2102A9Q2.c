#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 9 - Question 2
	**/ 
	
int *find_largest(int a[], int n){
    int i, largestElement = 0;

    for (i = 0; i < n; i++) {
        if (a[i] > a[largestElement])
            largestElement = i;
	}

    return &a[largestElement];
}