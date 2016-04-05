#include <stdio.h>
#include <stdlib.h>

/* Exemplo de fun��o que retorna valores por refer�ncia  
	para os ponteiros dobro e metade */
void dobro_metade(int n, int *dobro, float *metade){
	*dobro = n+n;
	*metade = (float)n/2;
}

int main(){
	int x = 5,d;
	float m;
	dobro_metade(x,&d,&m); /* Note que passo o endere�o de mem�ria
							  de d e m para a fun��o dobro_metade */
	printf("O dobro de %d � %d, e a metade � %f",x,d,m);
}
