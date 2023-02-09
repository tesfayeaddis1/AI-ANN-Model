#include <stdio.h>

int main() {

  char ops;
  double num1, num2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &ops);
  printf("Enter two operands: ");
  scanf("%lf %lf", &num1, &num2);

  switch (ops) {
    case '+':
      printf("%.5f + %.5f = %.5f", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%.5f - %.5f = %.5f", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%.5f * %.5f = %.5f", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%.5f / %.5f = %.5f", num1, num2, num1 / num2);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
