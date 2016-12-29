
#include <stdio.h>
#include <stdlib.h>

int main(void){

	int x, y, menor, maior, ans;
	int result = 0;
	scanf("%d %d", &x, &y);

	if (x > y){
		menor = y; maior = x;
	} else {
		menor = x; maior = y;
	}
	menor++;
	
	while (menor < maior){
		if (abs(menor) % 2 == 1) result = result + menor;
		menor++;
	}
	printf("%d\n", result);

	return 0;
}

