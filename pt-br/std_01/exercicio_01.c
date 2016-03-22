#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Elabore um programa que ao longo da execução armazene em
   uma variável str os conteúdos:
	- str = "linguagem"
	- str2 = " C"
	- str = "linguagem C" (usando a função de concatenação)
   O programa deve apresentar o conteúdo final de str e a
   quantidade de caracteres nela armazenado. */
int main(){
	
	char str[20];
	char str2[5];
	
	/* Utilização do strcpy para setar valores string em char[] */
	strcpy(str,"linguagem"); 
	strcpy(str2," C");
	strcpy(str,strcat(str,str2));
	
	puts(str);
}