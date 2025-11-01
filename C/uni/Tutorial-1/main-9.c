#include <stdio.h>
int main() {
  float number_1, number_2;

  printf("Enter the first number: ");
  scanf("%f", &number_1);
  printf("Enter the second number: ");
  scanf("%f", &number_2);
  printf("The small number is: ");
  if (number_1 < number_2) {
    printf("%f", number_1);
  } else {
    printf("%f", number_2);
  }

  return 0;
}
