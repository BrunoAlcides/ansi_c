#include <stdlib.h>			/* Standard IO */
#include <stdio.h>			/* Standard Library */
#include <string.h>

#define MAX 60			/* A global variable definition */
/* Develop a program that reads from the keyboard the grade and the name for each student of a classroom
(storing in 2 vectors). The program needs to show the name and the grade from the best student of the 
classroom */
int main(){
	
	/* Limits the students number according to the MAX variable */
	int N_STUDENTS;
	do {
		printf("How many students in this classroom? (max %d) :",MAX);
		scanf("%d", &N_STUDENTS);
	} while (N_STUDENTS >= MAX);
	
	char name[MAX][30]; 	/* An array declaration with N_STUDENTS lines and 30 columns
									used to store N_STUDENTS strings */
	int grades[MAX]; 		/* An array declaration with N_STUDENTS lines */
	int i;
	float best_grade;			/* Float uses less memory than Double */
	char best_student[30];		/* A 30 characters string declaration */
	
	/*	Array filling	*/
	for (i=0;i<N_STUDENTS;i++){
		printf("Write the name of the student %d: ",i);
		fflush(stdin);			/* Do the compiler stops and clean the buffer
									to make gets to work properly */
		gets(name[i]);			/* Get the string and add in name[i] as a char[] */
		printf("Write the %s's grade: ",name[i]);
		scanf("%d",&grades[i]);
		printf("\n");
		
		if (best_grade < grades[i]){  /* Check if the best grade is higher than
													the actual student grade */
			best_grade = grades[i];
			strcpy(best_student,name[i]);	/* String attribution with the strcpy function */
		}
	}
	
	printf("The best student in the classroom is %s, who gets %.1f in the grade\n",best_student,best_grade);	
	system("pause");			/* Keep the screen open with the final display of the program */	
}
