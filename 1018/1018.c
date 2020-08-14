
#include <stdio.h>

int main(void){
	
	long valor;
	int cem, cinq, vinte, dez, cinco, dois;

	scanf("%ld", &valor);

	printf("%d\n", valor);

	cem = valor / 100;
	printf("%d nota(s) de R$ 100,00\n", cem);

	valor -= cem *100;

	cinq = valor / 50;
	printf("%d nota(s) de R$ 50,00\n", cinq);

	valor -= cinq *50;

	vinte = valor / 20;
	printf("%d nota(s) de R$ 20,00\n", vinte);

	valor -= vinte *20;

	dez = valor / 10;
	printf("%d nota(s) de R$ 10,00\n", dez);

	valor -= dez *10;

	cinco = valor / 5;
	printf("%d nota(s) de R$ 5,00\n", cinco);

	valor -= cinco *5;

	dois = valor / 2;
	printf("%d nota(s) de R$ 2,00\n", dois);

	valor -= dois * 2;

	printf("%d nota(s) de R$ 1,00\n", valor);

	return 0;
}