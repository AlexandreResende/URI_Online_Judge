//uri online judge exercise 1075
#include <stdio.h>

int main(void){

	int n, ans;
	scanf("%d", &n);

	for (ans = 1; ans <= 10000; ans++){
		if (ans % n == 2){
			printf("%d\n", ans);
		}
	}

	return 0;
}