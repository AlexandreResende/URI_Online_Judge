
#include <stdio.h>

int main(void){
	
	int sumLeds, totalTests, ans, ans2;
	char leds[105];

	scanf("%d%*c", &totalTests);	

	for (ans = 0; ans < totalTests; ans++){

		gets(leds);
		sumLeds = 0;

		for (ans2 = 0; leds[ans2] != '\0'; ans2++){

			if (leds[ans2] == '1') sumLeds += 2;
			else if (leds[ans2] == '2') sumLeds += 5;
			else if (leds[ans2] == '3') sumLeds += 5;
			else if (leds[ans2] == '4') sumLeds += 4;
			else if (leds[ans2] == '5') sumLeds += 5;
			else if (leds[ans2] == '6') sumLeds += 6;
			else if (leds[ans2] == '7') sumLeds += 3;
			else if (leds[ans2] == '8') sumLeds += 7;
			else if (leds[ans2] == '9') sumLeds += 6;
			else if (leds[ans2] == '0') sumLeds += 6;
		}

		printf("%d leds\n", sumLeds);
	}

	return 0;
}