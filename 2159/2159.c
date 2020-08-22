#include <stdio.h>
#include <math.h>

int main(void) {
  long long int input;

  scanf("%lld", &input);

  double min = input/log(input);
  double max = 1.25506 * min;

  printf("%.1f %.1f\n", min, max);

  return 0;
}