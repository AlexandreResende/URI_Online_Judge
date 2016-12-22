
#include <stdio.h>
#include <math.h>

int main(void){
	
	int hi, mi, hf, mf, hora, minuto;

	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

	if (mf < mi){
		if (hf < hi){
			hf += 23;
			mf += 60;
		} else {
			mf += 60;
			hf -= 1;
		}
	} else {
		if (hf <= hi){
			hf += 24;
		}
	}

	hora = abs(hf - hi);
	minuto = abs(mf - mi);

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);

	return 0;
}