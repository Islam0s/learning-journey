#include <stdio.h>
int main() {
  float number_1, number_2, number_3;

  printf("Enter the first number: ");
  scanf("%f", &number_1);
  printf("Enter the second number: ");
  scanf("%f", &number_2);
  printf("Enter the value of number 3: ");
  scanf("%f", &number_3);
  printf("The small number is: ");
  if (number_1 < number_2 && number_3) {
    printf("%f", number_1);
  } else if (number_2 < number_3 && number_1) {
    printf("%f", number_2);
  } else if (number_3 < number_1 && number_2) {
    printf("%f", number_3);
  }

  return 0;
}
