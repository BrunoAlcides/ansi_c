#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5		/* Defini��o de uma vari�vel global */

int main(){
	
	int vetor[N];	/* Declara��o de um array com 5 campos do tipo int */
	char nome[10];	/* Declara��o de uma "string" com 10 caracteres */
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
	// scanf("%s",nome);	/* No scanf de strings n�o colocamos o & */
	gets(nome);				/* Tem a mesma fun��o do scanf para strings */ 
	// printf("O valor digitado para a \"string\" �: %s",nome);
	// puts(nome);			/* Tem a mesma fun��o do printf para strings */
	
	/* Fun��es da biblioteca <string.h> */
	strcpy(sobrenome, nome);	/* Copia de uma string para outra seguindo (to,from) */
	strcat(nome,sobrenome);		/* Concatena dois argumentos string */
	strlen(nome);				/* Pega o comprimento da string */
	strcmp(nome,sobrenome);		/* Compara duas strings seguindo (str1,str2):
										- se retornar 0 s�o iguais 
										- se retornar <0 ent�o str1 < str2
										- se retornar >0 ent�o str1 > str2 */
										
}