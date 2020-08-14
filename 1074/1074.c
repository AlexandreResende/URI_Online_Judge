
#include <stdio.h>

int main(void){
	
	int testNumbers, ans;
	long long number;

	scanf("%d", &testNumbers);

	for (ans = 0; ans < testNumbers; ans++){
		scanf("%lld", &number);

		if (number == 0){
			printf("NULL\n");
		} else if (number > 0 && (number % 2 == 1)) {
			printf("ODD POSITIVE\n");
		} else if (number < 0 && (number % 2 == 0)) {
			printf("EVEN NEGATIVE\n");
		} else if (number > 0 && (number % 2 == 0)) {
			printf("EVEN POSITIVE\n");
		} else {
			printf("ODD NEGATIVE\n");
		}
	}
	return 0;
}