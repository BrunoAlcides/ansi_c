void exercicio_01(int *vetor, int *menor, int *posicao) {
	int i;
	*posicao = 0;

	for (i = 0;i < 8;i++) {
		if (i == 0)
			*menor = vetor[i];
		else if (vetor[i] < *menor) {
			*posicao = i;
			*menor = vetor[i];
		}
	}
};
