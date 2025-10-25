#include <stdio.h>

int main() {
  float copies;
  char status;
  float money;

  printf("Are you a student (y or n): ");
  scanf("%c", &status);
  printf("How much copies do you want: ");
  scanf("%f", &copies);

  if (status == 'n') {
    if (copies < 50) {
      money = copies * 4;
      printf("Give me %f", money);
    } else if (copies <= 100.00) {
      money = copies * 3;
      printf("Give me %f", money);
    } else if (copies > 100) {
      money = copies * 2.5;
      printf("Give me %f", money);
    }

  } else if (status == 'y') {

    money = copies * 4;
    printf("Give me %f", money * 0.9);
  }
}
