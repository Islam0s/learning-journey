#include <stdio.h>

int main() {
  float num, result;
  printf("Enter a number: ");
  scanf("%f", &num);
  if (num < 0) {
    printf("%f", num * -1);

  } else {
    printf("%f", num);
  }

  return 0;
}
