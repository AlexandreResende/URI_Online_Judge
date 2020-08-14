
#include <stdio.h>

int main(void){

	double result = 0;
	int maxValue = 101, ans;

	for (ans = 1; ans < maxValue; ans++){
		result += 1 / (ans * 1.0);
	}
	printf("%.2f\n", result);

	return 0;
}