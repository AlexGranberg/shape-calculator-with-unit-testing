#include <math.h>
#include <stdio.h>

float calculator(float number1, float number2, char operator){
  float result = 0;
  switch (operator)
  {
  case '+':
    result = number1 + number2;
    break;
  case '-':
    result = number1 - number2;
    break;
  case '*':
    result = number1 * number2;
    break;
  case '/':
    result = number1 / number2;
    break;
  case '%':
    result = remainder(number1, number2);
    break;
  default:
    printf("Invalid operator!\n");
    break;
  }
return result;
}