#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5		/* A global variable definition */

int main(){	
	int vector[N];	/* An array declaration with 5 integer "fields" */
	char name[10];	/* A "string" declaration with 10 characters */
	char last_name[10];
	int i;
		
	/*	Vector's filling	*/
	for (i=0; i<N; i++){
		printf("Write the value of member %d of the vector: ",i);
		scanf("%d",&vector[i]);
		// printf("Value of %d: %d\n",i,vector[i]);
	}
	
	/*	char[] (string) filling   */
	printf("Write the value for the \"string\": ",i);
	fflush(stdin);			/* Makes the compiler stops */
	// scanf("%s",name);	/* In scanf for strings we don't use & */
	gets(name);				/* Have the same function of scanf for strings */ 
	// printf("The typed value for \"string\" is: %s",name);
	// puts(name);			/* Have the same function of printf for strings */
	
	/* <string.h> library functions */
	strcpy(last_name, name);	/* Copys a string to another (to,from) */
	strcat(name,last_name);		/* Concatenates two arguments string */
	strlen(name);				/* Gets the length of string */
	strcmp(name,last_name);		/* Compares two strings (str1,str2):
										- if returns 0 they are equals 
										- if returns <0 so str1 < str2
										- if returns >0 so str1 > str2 */										
}

/* Develop a program that stores in execution a variable with the contents:
	- str = "language"
	- str2 = " C"
	- str = "language C" (using the concatenate function)
   The program needs to show the content of the final str and its length. */
int exercise_01(){
	
	char str[20];
	char str2[5];
	
	/* strcpy utilization to set a string in char[] */
	strcpy(str,"language"); 
	strcpy(str2," C");
	strcpy(str,strcat(str,str2));
	
	puts(str);
}