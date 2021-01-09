#include <stdio.h>
/** Ivan Siat - 3081845
	Scientific Computing
	Assignment 5 - Question 2
	**/ 
int main() {
    int num, i;
    float fac = 1.0;
	float ans = 1.0;
    printf("Enter an integer: ");
    scanf("%d", &num);

   
        for (i = 1; i <= num; ++i) {
            ans += 1.0/(fac *= i);
        }
   
       printf("Euler's Number = %f", ans);
    

    return 0;
}
