
#include <stdio.h>

int main(void){
	
	int startHour, endHour;

	scanf("%d %d", &startHour, &endHour);

	printf("O JOGO DUROU %d HORA(S)\n",
		  (startHour < endHour)? endHour - startHour
		  					   : endHour - startHour + 24);

	return 0;
}