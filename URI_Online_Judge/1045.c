
#include <stdio.h>

void sort(double *vector, int tam);

int main(void){
	
	double vetor[3];
	int tam = 3, ans;

	scanf("%lf %lf %lf", &vetor[0], &vetor[1], &vetor[2]);
	sort(vetor, tam);

	if (vetor[0] >= vetor[1] + vetor[2]){
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}
	if (vetor[0]*vetor[0] == vetor[1]*vetor[1] + vetor[2]*vetor[2]){
		printf("TRIANGULO RETANGULO\n");
	}
	if (vetor[0]*vetor[0] > vetor[1]*vetor[1] + vetor[2]*vetor[2]){
		printf("TRIANGULO OBTUSANGULO\n");
	}
	if (vetor[0]*vetor[0] < vetor[1]*vetor[1] + vetor[2]*vetor[2]){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if (vetor[0] == vetor[1] && vetor[1] == vetor[2]){
		printf("TRIANGULO EQUILATERO\n");
	}
	if ((vetor[0] == vetor[1] && vetor[1] != vetor[2]) ||
		(vetor[1] == vetor[2] && vetor[0] != vetor[1]) ||
		(vetor[0] == vetor[2] && vetor[0] != vetor[1])){
		printf("TRIANGULO ISOSCELES\n");
	}

	return 0;
}

void sort(double *vector, int tam){
	int aux, ans, ans2;

	for (ans = 0; ans < tam-1; ans++){
		for(ans2 = ans+1; ans2 < tam; ans2++){
			if (vector[ans] < vector[ans2]){
				aux = vector[ans];
				vector[ans] = vector[ans2];
				vector[ans2] = aux;
			}
		}
	}
}