
#include <stdio.h>

int main(void){

	int n, ans;
	scanf("%d", &n);

	for (ans = 1; ans <= n; ans++){
		printf("%d %d %d\n", ans, ans*ans, ans*ans*ans);
	}

	return 0;
}