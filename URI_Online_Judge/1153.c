
#include <stdio.h>

int main(void){

	long result = 1, num, ans;
	scanf("%ld", &num);

	for (ans = 1; ans <= num; ans++){
		result *= ans;
	}

	printf("%ld\n", result);

	return 0;
}