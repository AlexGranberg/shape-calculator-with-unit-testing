#include <math.h>
#include <stdio.h>
#include "SafeInput.h"
#include "functions.h"
#include <stdlib.h>


float calculator(float number1, float number2, char op){
  float result = 0;
  switch (op)
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

void calculatorMenu(){
system("cls");
float number1 = 0;
float number2 = 0;
char op;
float result = 0;
  blue();
  printf("\n::: Calculator :::\n");
  reset();
  GetInputFloat("Enter first number: ", &number1);
  GetInputFloat("Enter second number: ", &number2);
  GetInputChar("Enter operator: (+,-,*,/,%) ", &op);
        
  result = calculator(number1, number2, op);
  printf("The result is: %.2f", result);

}

