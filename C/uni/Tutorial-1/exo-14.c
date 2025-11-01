#include <math.h>
#include <stdio.h>
int main() {

  float a, b, c, x_1, x_2, delta;

  printf("Enter the value of a:");
  scanf("%f", &a);
  printf("Enter the value of b: ");
  scanf("%f", &b);
  printf("Enter the value of c: ");
  scanf("%f", &c);

  delta = b * b - 4 * a * c;
  printf("The eqution will be like: ax*x + b*x + c");
  if (delta < 0) {
    printf("The equation does not have any solution.");
  } else if (delta > 0) {
    x_1 = (-b + sqrt(delta)) / (2 * a);
    x_2 = (-b - sqrt(delta)) / (2 * a);

    printf("The value of X_1: %f ", x_1);
    printf("The value of x_2: %f", x_2);
  } else if (delta == 0) {
    x_1 = -b / 2 * a;
    printf("The soltoion is: %f", x_1);
  };

  return 0;
}
