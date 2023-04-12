#include <stdio.h>
#include "SafeInput.h"
#include "unistd.h"
#include "functions.h"
#include <stdlib.h>
#include <math.h>

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


int choice(){
while(1){
    printf("\nMenu\n");
    printf("1. Shapes\n");
    printf("2. Calculator\n");
    printf("3. Exit\n");

    int sel;
    if(GetInputInt("Select choice: ", &sel)) return sel;
    else{
        printf("Not a valid entry!\n");
    }
}




}

void red () {
  printf("\033[1;31m");
}

void green () {
  printf("\033[0;32m");
}

void reset () {
  printf("\033[0m");
}
