
#include <stdio.h>

int main(void){
	
	double value;
	int ans, total = 0;

	for (ans = 0; ans < 6; ans++){
		scanf("%lf", &value);
		if (value > 0) total++;
	}

	printf("%d valores positivos\n", total);

	return 0;
}