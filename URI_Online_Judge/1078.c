
#include <stdio.h>

int main(void){

	int n, ans;
	scanf("%d", &n);

	for (ans = 1; ans <= 10; ans++){
		printf("%d x %d = %d\n", ans, n, ans*n);
	}

	return 0;
}