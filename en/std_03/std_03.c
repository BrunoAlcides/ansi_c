#include <stdio.h>
#include <stdlib.h>

/* Sample of function that returns values by reference
    to the pointers *twice and *half */
	
void twice_half(int n, int *twice, float *half){
	*twice = n+n;
	*half = (float)n/2;
}

int main(){
	int x = 5,t;
	float h;
	twice_half(x,&t,&h); /* Note that I've passed the memory address
							of t and h to the function twice_half */
	printf("Twice of %d is equal to %d. Half of %d is equal to %f",x,t,x,h);
}
