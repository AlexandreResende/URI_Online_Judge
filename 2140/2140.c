
#include <stdio.h>

int main(void){
	
	int value, paid, ans;
	int sumOfValues[] = {4,7,12,22,52,102,
					   10,15,25,55,105,
					   20,30,60,110,
					   40,70,120,
					   100,150,
					   200};

	while(1){

		scanf("%d %d", &value, &paid);

		if (value == 0 && paid == 0){
			break;
		}

		for (ans = 0; ans < 21; ans++){
			if (paid - value == sumOfValues[ans]){
				printf("possible\n");
				break;
			}
		}
		if (ans == 21){
			printf("impossible\n");
		}

	}

	return 0;
}