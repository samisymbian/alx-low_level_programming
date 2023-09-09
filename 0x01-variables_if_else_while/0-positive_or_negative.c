#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n>0){
		printf("n is positive",%d);
		else if(n==0){
			printf("n is zero",%d);
		}
		else if(n<0){
			printf("n is negative",%d);
		}
	return (0);
}
