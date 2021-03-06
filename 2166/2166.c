#include <stdio.h>
#include <string.h>

// THIS IS AN EXERCISE ABOUT CONTINUED FRACTION
int main(void) {
  int input, counter;

  scanf("%d", &input);

  if (input == 0) {
    printf("1.0000000000\n");

    return 0;
  }

  double nominator = 1.0;
  double previousDenominator = 1.0;
  double denominator = 2.0;
  double aux;
  for (counter = 1; counter < input; counter++) {
    nominator = denominator;
    aux = denominator;
    denominator = denominator * 2.0 + previousDenominator;
    previousDenominator = aux;
  }

  printf("%.10f\n", 1 + (nominator/denominator));

  return 0;
}