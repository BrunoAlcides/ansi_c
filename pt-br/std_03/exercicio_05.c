#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Fun��o que deve retornar por refer�ncia:
	  S - para tri�ngulo escaleno
	  I - para tri�ngulo is�sceles
	  E - para tri�ngulo equil�tero
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
	
	strcpy(msg,"Voc� precisa digitar um valor maior que 0 para todos os lados\n\n");
	
	do {
		opt = '.';
		
		do {
			printf("Digite o valor do lado 1 do tri�ngulo: ");
			scanf("%d",&x);
			if (x <= 0) puts(msg);
		} while (x <= 0);
		
		do {
			printf("Digite o valor do lado 2 do tri�ngulo: ");
			scanf("%d",&y);
			if (y <= 0) puts(msg);
		} while (y <= 0);
		
		do {
			printf("Digite o valor do lado 3 do tri�ngulo: ");
			scanf("%d",&z);
			if (z <= 0) puts(msg);
		} while (z <= 0);
		
		if (x > 0 && y > 0 && z > 0){
		    tipoTriangulo(&tipo_c,x,y,z);
			switch (tipo_c){
				case 'E':
					strcpy(tipo,"Equil�tero");
					break;
				case 'I':
					strcpy(tipo,"Is�sceles");
					break;
				case 'S':
					strcpy(tipo,"Escaleno");
					break;	
			}
			printf("O tri�ngulo (%d,%d,%d) � do tipo %s\n\n", x, y, z, tipo);	
		}
			
		while (opt != 's' && opt != 'n'){
			printf("Deseja testar um novo tri�ngulo? (s/n)\n");
			fflush(stdin);
			scanf("%c",&opt);
			printf("\n\n");
		}
	} while (opt == 's');
	
}
