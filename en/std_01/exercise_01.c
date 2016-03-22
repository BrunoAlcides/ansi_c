#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Develop a program that stores in execution a variable with the contents:
	- str = "language"
	- str2 = " C"
	- str = "language C" (using the concatenate function)
   The program needs to show the content of the final str and its length. */
int main(){
	
	char str[20];
	char str2[5];
	
	/* strcpy utilization to set a string in char[] */
	strcpy(str,"language"); 
	strcpy(str2," C");
	strcpy(str,strcat(str,str2));
	
	puts(str);
}