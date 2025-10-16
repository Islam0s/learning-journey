#include <stdio.h>

int main() {
  int copies;
  char status;
  int money;

  printf("Are you a studend (y or n): ");
  scanf("%c", &status);
  printf("How much copies do you want: ");
  scanf("%d", &copies);

  if (status == 'n') {
    money = copies * 4;
    printf("Give me %d", money);

  } else if (status == 'y') {
    money = copies * 5;
    printf("Give me %d", money);
  };
}
