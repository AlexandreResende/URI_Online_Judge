
#include <stdio.h>
#include <string.h>

int main(void){
	
	int testCases, strength, ans;
	char name[50];

	scanf("%d%*c", &testCases);

	for (ans = 0; ans < testCases; ans++){

		scanf("%s %d", &name, &strength);

		if (strcmp(name, "Thor") == 0){
			printf("Y\n");
		} else {
			printf("N\n");
		}
	}

	return 0;
}