#include <stdio.h>
#include <stdlib.h>

/* Exemplo de função que retorna valores por referência  
	para os ponteiros dobro e metade */
void dobro_metade(int n, int *dobro, float *metade){
	*dobro = n+n;
	*metade = (float)n/2;
}

int main(){
	int x = 5,d;
	float m;
	dobro_metade(x,&d,&m); /* Note que passo o endereço de memória
							  de d e m para a função dobro_metade */
	printf("O dobro de %d é %d, e a metade é %f",x,d,m);
}
