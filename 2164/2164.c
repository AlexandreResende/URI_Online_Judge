#include <stdio.h>
#include <math.h>

int main(void) {
  int input;
  double minusExpression, plusExpression, squareRoot5;
  double result;

  scanf("%d", &input);

  squareRoot5 = sqrt(5.0);
  minusExpression = pow((1.0 - squareRoot5)/2.0, input);
  plusExpression = pow((1.0 + squareRoot5)/2.0, input);

  result = (plusExpression - minusExpression)/squareRoot5;

  printf("%.1f\n", result);

  return 0;
}