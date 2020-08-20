#include <stdio.h>
#include <string.h>

int main(void) {
  int input, counter;
  char word[10001];

  scanf("%d", &input);

  for (counter = 0; counter < input; counter++) {
    scanf("%s", word);

    printf("%.2f\n", strlen(word) * 0.01);
  }

  return 0;
}