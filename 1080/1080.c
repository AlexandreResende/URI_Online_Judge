
#include <stdio.h>

int main(void){
	
	int totalValues = 100;
	int position = -1;
	int number = -1;
	int numInput, ans;

	for (ans = 0; ans < totalValues; ans++){

		scanf("%d", &numInput);

		if (numInput > number){
			number = numInput;
			position = ans + 1;
		}
	}

	printf("%d\n%d\n", number, position);

	return 0;
}