#include <stdio.h>
#include <stdlib.h>
#include "SafeInput.h"
#include <stdbool.h>
#include "functions.h"
#include "calculator.h"
#include "shapes.h"


int main(){

system("cls");

while(1){
    int sel = choice();
    if(sel == 1) shapesMenu();
    if(sel == 2) calculatorMenu();
    // if(sel == 2) {
    //     float number1 = 0;
    //     float number2 = 0;
    //     char operator;
    //     float result = 0;

    //     GetInputFloat("Enter first number: ", &number1);
    //     GetInputFloat("Enter second number: ", &number2);
    //     GetInputChar("Enter operator: (+,-,*,/,%) ", &operator);
        
    //     result = calculator(number1, number2, operator);
    //     printf("The result is: %.2f", result);
    // } 
    if(sel == 3) printf("Rock paper sissor");
    if(sel == 4) break;


}
return 0;


}

