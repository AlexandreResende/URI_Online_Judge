#include <stdio.h>
#include <string.h>

void printTime(int h, int m) {
  if (h > 9 && m > 9) {
    printf("%d:%d - ", h, m);
  } else if (h > 9 && m <= 9) {
    printf("%d:0%d - ", h, m);
  } else if (h <= 9 && m > 9) {
    printf("0%d:%d - ", h, m);
  } else {
    printf("0%d:0%d - ", h, m);
  }
}

void printDoorAction(int o) {
  if (o == 1) {
     printf("A porta abriu!\n");
  } else {
    printf("A porta fechou!\n");
  }
}

int main(void) {
  int input, counter, h, m, o;

  scanf("%d", &input);

  for (counter = 0; counter < input; counter++) {
    scanf("%d%d%d", &h, &m, &o);

    printTime(h, m);
    printDoorAction(o);
  }

  return 0;
}