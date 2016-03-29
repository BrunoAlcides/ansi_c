int min(int *vetor, int tamanho) {
	int i;
	int menor;

	for (i = 0;i < tamanho;i++) {
		if (i == 0)
			menor = vetor[i];
		else if (vetor[i] < menor)
			menor = vetor[i];
	}

	return menor;
}
