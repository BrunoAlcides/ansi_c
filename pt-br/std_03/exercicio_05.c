#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Função que deve retornar por referência:
	  S - para triângulo escaleno
	  I - para triângulo isósceles
	  E - para triângulo equilátero
*/
void tipoTriangulo(char *tipo,int x, int y, int z){
	if (x == y && y == z)
		*tipo = 'E';
	else if ((x == y && x != z) || (x == z && x != y) || (y == z && y != x))
		*tipo = 'I';
	else if (x != y && x != z && y != z) *tipo = 'S';
}

int main(){
	
	int x, y, z;
	char opt;
	char tipo_c;
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
		    tipoTriangulo(&tipo_c,x,y,z);
			switch (tipo_c){
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
