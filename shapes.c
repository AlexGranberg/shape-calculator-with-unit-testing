#include <stdio.h>
#include "functions.h"
#include "SafeInput.h"
#include <stdlib.h>
#include <math.h>

void shapesSelection(){

    printf("\nShapes Menu:\n");
    printf("1. Rectangle\n");
    printf("2. Parallelogram\n");
    printf("3. Triangle\n");
    printf("4. Circle\n");
    printf("5. Back to menu\n");

    int sel;
    if(GetInputInt("Which shape would you like to calculate area and circumference? ", &sel));
    else{
        printf("Not a valid entry!\n");
    }
    float resultArea = 0;
    float resultCircumference = 0;
    if(sel == 1) { 
        rectangle(&resultArea, &resultCircumference);
        printf("The area of the rectangle is: %.2f and the circumference is: %.2f\n", resultArea, resultCircumference);
        printf(" Side A\n");
        printf(" ______\n");
        printf("|______| Side B\n");
    }
    if(sel == 2) printf("Test2");
    if(sel == 3) printf("Test3");
    if(sel == 4) printf("Test4");
    if(sel == 5) choice();
}

void rectangle(float *resultArea, float *resultCircumference){
    float side1 = 0;
    float side2 = 0;
    GetInputFloat("Enter the lenght: ", &side1);
    GetInputFloat("Enter the height: ", &side2);
    *resultArea = side1 * side2;
    *resultCircumference = (side1 + side2) * 2;
}

void parallelogram(float *resultArea, float *resultCircumference){
    float side1 = 0;
    float side2 = 0;
    GetInputFloat("Enter the lenght: ", &side1);
    GetInputFloat("Enter the height: ", &side2);
    *resultArea = side1 * side2;
    *resultCircumference = (side1 + side2) * 2;
}