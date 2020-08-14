
#include <stdio.h>

int main(void){

	int result = 0, num, ans, total = 5;

	for (ans = 0; ans < 5; ans++){

		scanf("%d", &num);
		if (num % 2 == 0){
			result++;
		}
	}

	printf("%d valores pares\n", result);

	return 0;
}