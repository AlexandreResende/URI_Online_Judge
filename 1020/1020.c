
#include <stdio.h>

int main(void){
	
	int totalDays, year, month;

	scanf("%d", &totalDays);

	year = totalDays / 365;
	totalDays -= year * 365;
	month = totalDays / 30;
	totalDays -= month * 30;

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, totalDays);

	return 0;
}