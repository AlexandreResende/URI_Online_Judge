
#include <stdio.h>

int main(void){
	
	double n1, n2, n3, n4, exame, media;

	scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
	media = (n1*2 + n2*3 + n3*4 + n4) / 10;

	if (media >= 7){
		printf("Media: %.1f\nAluno aprovado.\n", media);
		return 0;
	} else if (media < 5){
		printf("Media: %.1f\nAluno reprovado.\n", media);
	} else{
		printf("Media: %.1f\nAluno em exame.\n", media);
		scanf("%lf", &exame);
		printf("Nota do exame: %.1f\n", exame);
		media = (media + exame)/2;
		if (media >= 5){
			printf("Aluno aprovado.\nMedia final: %.1f\n", media);
		} else {
			printf("Aluno reprovado.\nMedia final: %.1f\n", media);
		}
	}

	return 0;
}