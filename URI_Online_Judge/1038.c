
#include <stdio.h>

int main(void){
	
	int quantidade, pedido;
	double valorTotal;

	scanf("%d %d", &pedido, &quantidade);

	switch(pedido){
		case 1:
			valorTotal = 4;
			break;
		case 2:
			valorTotal = 4.5;
			break;
		case 3:
			valorTotal = 5;
			break;
		case 4:
			valorTotal = 2;
			break;
		case 5:
			valorTotal = 1.5;
			break;
	}

	printf("Total: R$ %.2f\n", valorTotal * quantidade);

	return 0;
}