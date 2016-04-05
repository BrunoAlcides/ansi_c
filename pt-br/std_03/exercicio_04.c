#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Função que deve retornar:
	  S - para triângulo escaleno
	  I - para triângulo isósceles
	  E - para triângulo equilátero
*/
char tipoTriangulo(int x, int y, int z){
	if (x == y && y == z)
		return 'E';
	else if ((x == y && x != z) || (x == z && x != y) || (y == z && y != x))
		return 'I';
	else if (x != y && x != z && y != z) return 'S';
}

int main(){
	/* Teste da função */
	// printf("Teste triângulo escaleno (1,2,3): %c\n",tipoTriangulo(1,2,3));
	// printf("Teste triângulo equilátero (2,2,2): %c\n",tipoTriangulo(2,2,2));
	// printf("Teste triângulo isósceles (1,2,2): %c\n",tipoTriangulo(1,2,2));
	
	int x, y, z;
	char opt;
	char tipo[20];
	char msg[255];
	
	strcpy(msg,"Você precisa digitar um valor maior que 0 para todos os lados\n\n");
	
	do {
		opt = '.';
		
		do {
			printf("Digite o valor do lado 1 do triângulo: ");
			scanf("%d",&x);
			if (x <= 0) puts(msg);
		} while (x <= 0);
		
		do {
			printf("Digite o valor do lado 2 do triângulo: ");
			scanf("%d",&y);
			if (y <= 0) puts(msg);
		} while (y <= 0);
		
		do {
			printf("Digite o valor do lado 3 do triângulo: ");
			scanf("%d",&z);
			if (z <= 0) puts(msg);
		} while (z <= 0);
		
		if (x > 0 && y > 0 && z > 0){
			switch (tipoTriangulo(x,y,z)){
				case 'E':
					strcpy(tipo,"Equilátero");
					break;
				case 'I':
					strcpy(tipo,"Isósceles");
					break;
				case 'S':
					strcpy(tipo,"Escaleno");
					break;	
			}
			printf("O triângulo (%d,%d,%d) é do tipo %s\n\n", x, y, z, tipo);	
		}
			
		while (opt != 's' && opt != 'n'){
			printf("Deseja testar um novo triângulo? (s/n)\n");
			fflush(stdin);
			scanf("%c",&opt);
			printf("\n\n");
		}
	} while (opt == 's');
}
