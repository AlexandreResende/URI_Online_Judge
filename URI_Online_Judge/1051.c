
#include <stdio.h>

int main(void){
	
	double salario;

	scanf("%lf", &salario);

	if (salario <= 2000){
		printf("Isento\n");
	} else if (salario >= 2000.01 && salario <= 3000){
		printf("R$ %.2f\n", (salario - 2000) * 0.08);
	} else if (salario >= 3000.01 && salario <= 4500){
		printf("R$ %.2f\n", (salario - 3000) * 0.18 + 80);
	} else {
		printf("R$ %.2f\n", (salario - 4500) * 0.28 + 80 + 270);
	}

	return 0;
}