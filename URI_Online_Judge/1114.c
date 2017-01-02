
#include <stdio.h>

int main(void){

	int num;

	while(scanf("%d", &num) != EOF){

		if (num == 2002){
			printf("Acesso Permitido\n");
			break;
		}
		printf("Senha Invalida\n");
	}

	return 0;
}