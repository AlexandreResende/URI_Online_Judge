
#include <stdio.h>

int main(void){

	int num, ans;
	scanf("%d", &num);

	num = (num % 2 == 0) ? num + 1 : num;

	for (ans = num; ans <= num + 10; ans+=2){
		printf("%d\n", ans);
	}

	return 0;
}