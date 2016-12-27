
#include <stdio.h>

int main(void){
	
	int n, ans;
	scanf("%d", &n);

	for (ans = 1; ans <= n; ans+=2){
		printf("%d\n", ans);
	}

	return 0;
}