
#include <stdio.h>

int main(void){
	
	int totalTime, hour, minutes;

	scanf("%d", &totalTime);

	hour = totalTime / 3600;
	totalTime -= hour * 3600;
	minutes = (totalTime) / 60;
	totalTime -= minutes * 60;

	printf("%d:%d:%d\n", hour, minutes, totalTime);

	return 0;
}