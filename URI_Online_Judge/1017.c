
#include <stdio.h>

int main(void){

	double time, velocity;

	scanf("%lf\n%lf", &time, &velocity);	

	printf("%.3f\n", velocity * time / 12);

	return 0;
}