#include <stdlib.h>			/* Standard IO */
#include <stdio.h>			/* Standard Library */
#include <string.h>

#define MAX 60			/* Defini��o de uma vari�vel global */
/* Elabore um programa que leia do teclado a nota e o nome de cada aluno de uma classe
(armazenando em 2 vetores). O programa deve apresentar o nome e a nota do melhor aluno
da sala. */
int main(){
	
	/* Limita o n�mero de alunos de acordo com a vari�vel MAX */
	int N_ALUNOS;
	do {
		printf("Quantos alunos essa classe possui? (maximo 60) :");
		scanf("%d", &N_ALUNOS);
	} while (N_ALUNOS >= MAX);
	
	char nome[MAX][30]; 	/* Declara��o de um array com N_ALUNOS linhas e com 30 colunas
									utilizado para armazenar N_ALUNOS strings */
	int notas[MAX]; 		/* Declara��o de um array com N_ALUNOS linhas */
	int i;
	float maior_nota;			/* Float por que ocupa menos mem�ria do que o double */
	char melhor_aluno[30];		/* Declara��o de uma "string" de 30 caract�res */
	
	/*	Preenchimento do array	*/
	for (i=0;i<N_ALUNOS;i++){
		printf("digite o nome do aluno %d: ",i);
		fflush(stdin);			/* Faz com que o compilador pare e limpa o buffer
									para que o gets funcione corretamente */
		gets(nome[i]);			/* Pega string e adiciona no nome[i] como char */
		printf("digite a nota de %s: ",nome[i]);
		scanf("%d",&notas[i]);
		printf("\n");
		
		if (maior_nota < notas[i]){  /* Checa se a maior nota da sala � maior do que a
										do aluno atual */
			maior_nota = notas[i];
			strcpy(melhor_aluno,nome[i]);	/* Atribui��o de string com a fun��o strcpy */
		}
	}
	
	printf("O aluno com a melhor nota foi o %s, que tirou nota %.1f\n",melhor_aluno,maior_nota);	
	system("pause");			/* Mant�m a tela aberta com a exibi��o final do programa */	
}
