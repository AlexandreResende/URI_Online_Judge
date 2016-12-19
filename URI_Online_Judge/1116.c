
#include <stdio.h>

int main(void){
	
	int testCases, ans;
	double intX, intY;

	scanf("%d", &testCases);

	for (ans = 0; ans < testCases; ans++){

		scanf("%lf %lf", &intX, &intY);

		if (intY == 0){
			printf("divisao impossivel\n");
		} else {
			printf("%.1f\n", intX/intY);
		}
	}

	return 0;
}