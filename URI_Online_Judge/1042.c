
#include <stdio.h>

void sort(int *vector, int tam);

int main(void){
	
	int vetor[3], a, b, c;

	scanf("%d %d %d", &vetor[0], &vetor[1], &vetor[2]);

	a = vetor[0];
	b = vetor[1];
	c = vetor[2];

	sort(vetor, 3);

	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", vetor[0], vetor[1], vetor[2],
										 a, b, c);

	return 0;
}

void sort(int *vector, int tam){
	int aux, ans, ans2;

	for (ans = 0; ans < tam-1; ans++){
		for(ans2 = ans+1; ans2 < tam; ans2++){
			if (vector[ans] > vector[ans2]){
				aux = vector[ans];
				vector[ans] = vector[ans2];
				vector[ans2] = aux;
			}
		}
	}
}