#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Elabore um programa que ao longo da execu��o armazene em
   uma vari�vel str os conte�dos:
	- str = "linguagem"
	- str2 = " C"
	- str = "linguagem C" (usando a fun��o de concatena��o)
   O programa deve apresentar o conte�do final de str e a
   quantidade de caracteres nela armazenado. */
int main(){
	
	char str[20];
	char str2[5];
	
	/* Utiliza��o do strcpy para setar valores string em char[] */
	strcpy(str,"linguagem"); 
	strcpy(str2," C");
	strcpy(str,strcat(str,str2));
	
	puts(str);
}