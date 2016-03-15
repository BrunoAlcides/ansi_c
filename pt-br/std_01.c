#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5		/* Definição de uma variável global */

int main(){
	
	int vetor[N];	/* Declaração de um array com 5 campos do tipo int */
	char nome[10];	/* Declaração de uma "string" com 10 caracteres */
	char sobrenome[10];
	int i;
		
	/*	Preenchimento do vetor	*/
	for (i=0; i<N; i++){
		printf("Escreva o valor do elemento %d do vetor: ",i);
		scanf("%d",&vetor[i]);
		// printf("Valor de %d: %d\n",i,vetor[i]);
	}
	
	/*	Preenchimento do char[] (string)  */
	printf("Escreva o valor da \"string\": ",i);
	fflush(stdin);			/* Faz com que o compilador pare */
	// scanf("%s",nome);	/* No scanf de strings não colocamos o & */
	gets(nome);				/* Tem a mesma função do scanf para strings */ 
	// printf("O valor digitado para a \"string\" é: %s",nome);
	// puts(nome);			/* Tem a mesma função do printf para strings */
	
	/* Funções da biblioteca <string.h> */
	strcpy(sobrenome, nome);	/* Copia de uma string para outra seguindo (to,from) */
	strcat(nome,sobrenome);		/* Concatena dois argumentos string */
	strlen(nome);				/* Pega o comprimento da string */
	strcmp(nome,sobrenome);		/* Compara duas strings seguindo (str1,str2):
										- se retornar 0 são iguais 
										- se retornar <0 então str1 < str2
										- se retornar >0 então str1 > str2 */
										
}

/* Elabore um programa que ao longo da execução armazene em
   uma variável str os conteúdos:
	- str = "linguagem"
	- str2 = " C"
	- str = "linguagem C" (usando a função de concatenação)
   O programa deve apresentar o conteúdo final de str e a
   quantidade de caracteres nela armazenado. */
int exercicio_01(){
	
	char str[20];
	char str2[5];
	
	/* Utilização do strcpy para setar valores string em char[] */
	strcpy(str,"linguagem"); 
	strcpy(str2," C");
	strcpy(str,strcat(str,str2));
	
	puts(str);
}
