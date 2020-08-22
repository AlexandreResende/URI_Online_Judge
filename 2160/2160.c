#include <stdio.h>
#include <string.h>

int main(void) {
  char name[501];

  gets(name);

  printf("%s\n", (strlen(name) <= 80) ? "YES" : "NO");

  return 0;
}