
#include <stdio.h>

int main(void){
	
	int worldCups;

	while(scanf("%d", &worldCups) != EOF){

		if (!worldCups){
			printf("vai ter copa!\n");
		} else {
			printf("vai ter duas!\n");
		}
	}

	return 0;
}