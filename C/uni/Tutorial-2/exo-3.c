#include <stdio.h>

int main() {
  int n, a, i, result;

  printf("Enter the value if n: ");
  scanf("%d", &n);

  printf("Enter the value of a:");
  scanf("%d", &a);

  result = 1;

  for (i = 1; i <= n; i++) {
    result = result * n;
  };

  printf("%d", result);
}
