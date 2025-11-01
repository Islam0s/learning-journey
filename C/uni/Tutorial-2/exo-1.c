#include <stdio.h>

int main() {

  int N, num, i;

  int S = 0;

  printf("Enter the number of elements: ");
  scanf("%d", &N);

  for (i = 1; i <= N; i++) {
    printf("Enter the value of the number:");

    scanf("%d", &num);

    S += num;

    printf("The sum of your elements is %d", S);
  }
}
