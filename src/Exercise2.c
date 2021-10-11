/*
2. Write a function to calculate the factorial with given integer n,
which satisfies the following:
	if n is odd, factorial = 1 * 3 * 5 * … * n
	if n is even, factorial = 2 * 4 * 6 * … * n
Ex:
______________________________________
| Input: 11                          |
| Output: 10395                      |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[1]) 
{
	//testing variable, applying it to your algorithm for auto-evaluating
	int num = atoi(argv[1]);
	int result = 1;
	int i, j;
	//Your codes here
	if (num %2 != 0){
		for (int i = 1; j<=1; i+=2){
			result = result * i;
		} 
	}
	else if (num  %2 == 0){
		for (int i = 2; j<=num; j+=2){
			result = result * j;
		}
	}
	printf("%d", result);
	return 0;
}
