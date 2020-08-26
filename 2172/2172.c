#include <stdio.h>
#include <math.h>

int main(void) {
  int input;
  unsigned long long exp, result;

  while (1) {
    scanf("%d %llu", &input, &exp);

    if (input == 0 && exp == 0) {
      break;
    }

    printf("%llu\n", input * exp);
  }

  return 0;
}