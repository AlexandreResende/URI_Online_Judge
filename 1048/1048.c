
#include <stdio.h>

int main(void){
	
	double salario, newsalario;

	scanf("%lf", &salario);

	if (salario <= 400){
		newsalario = salario * 1.15;
		printf("Novo salario: %.2f\n", newsalario);
		printf("Reajuste ganho: %.2f\n", newsalario - salario);
		printf("Em percentual: 15 %%\n");
	} else if (salario > 400 && salario <= 800){
		newsalario = salario * 1.12;
		printf("Novo salario: %.2f\n", newsalario);
		printf("Reajuste ganho: %.2f\n", newsalario - salario);
		printf("Em percentual: 12 %%\n");
	} else if (salario > 800 && salario <= 1200){
		newsalario = salario * 1.1;
		printf("Novo salario: %.2f\n", newsalario);
		printf("Reajuste ganho: %.2f\n", newsalario - salario);
		printf("Em percentual: 10 %%\n");
	} else if (salario > 1200 && salario <= 2000){
		newsalario = salario * 1.07;
		printf("Novo salario: %.2f\n", newsalario);
		printf("Reajuste ganho: %.2f\n", newsalario - salario);
		printf("Em percentual: 7 %%\n");
	} else if (salario > 2000){
		newsalario = salario * 1.04;
		printf("Novo salario: %.2f\n", newsalario);
		printf("Reajuste ganho: %.2f\n", newsalario - salario);
		printf("Em percentual: 4 %%\n");
	}

	return 0;
}