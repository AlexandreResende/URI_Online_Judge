
#include <stdio.h>

int main(void){
	
	int num, ans;
	scanf("%d", &num);

	for (ans = 2; ans <= num; ans+=2){
		printf("%d^2 = %d\n", ans, ans*ans);
	}

	return 0;
}