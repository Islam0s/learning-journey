#include <stdio.h>
int main() {
  int x, result;
  printf("Enter the value x: ");
  scanf("%d", &x);
  result = 7 * (x * x * x) + 5 * (x * x) + 15;
  printf("%d", result);

  return 0;
}
