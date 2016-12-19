
#include <stdio.h>
#include <math.h>

int main(void){
	
	double a,b,c, delta, r1,r2;

	scanf("%lf %lf %lf", &a, &b, &c);

	delta = b*b - 4*a*c;

	if (delta < 0 || a == 0){
		printf("Impossivel calcular\n");
		return 0;
	}

	printf("R1 = %.5f\n", (-b + sqrt(delta)) / (2*a));
	printf("R2 = %.5f\n", (-b - sqrt(delta)) / (2*a));

	return 0;
}