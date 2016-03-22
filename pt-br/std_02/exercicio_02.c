#include <stdlib.h>			/* Standard IO */
#include <stdio.h>			/* Standard Library */
#include <string.h>

#define MAX 60			/* Definição de uma variável global */
/* Elabore um programa que leia do teclado a nota e o nome de cada aluno de uma classe
(armazenando em 2 vetores). O programa deve apresentar o nome e a nota do melhor aluno
da sala. */
int main(){
	
	/* Limita o número de alunos de acordo com a variável MAX */
	int N_ALUNOS;
	do {
		printf("Quantos alunos essa classe possui? (maximo 60) :");
		scanf("%d", &N_ALUNOS);
	} while (N_ALUNOS >= MAX);
	
	char nome[MAX][30]; 	/* Declaração de um array com N_ALUNOS linhas e com 30 colunas
									utilizado para armazenar N_ALUNOS strings */
	int notas[MAX]; 		/* Declaração de um array com N_ALUNOS linhas */
	int i;
	float maior_nota;			/* Float por que ocupa menos memória do que o double */
	char melhor_aluno[30];		/* Declaração de uma "string" de 30 caractéres */
	
	/*	Preenchimento do array	*/
	for (i=0;i<N_ALUNOS;i++){
		printf("digite o nome do aluno %d: ",i);
		fflush(stdin);			/* Faz com que o compilador pare e limpa o buffer
									para que o gets funcione corretamente */
		gets(nome[i]);			/* Pega string e adiciona no nome[i] como char */
		printf("digite a nota de %s: ",nome[i]);
		scanf("%d",&notas[i]);
		printf("\n");
		
		if (maior_nota < notas[i]){  /* Checa se a maior nota da sala é maior do que a
										do aluno atual */
			maior_nota = notas[i];
			strcpy(melhor_aluno,nome[i]);	/* Atribuição de string com a função strcpy */
		}
	}
	
	printf("O aluno com a melhor nota foi o %s, que tirou nota %.1f\n",melhor_aluno,maior_nota);	
	system("pause");			/* Mantém a tela aberta com a exibição final do programa */	
}
