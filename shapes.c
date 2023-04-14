#include <stdio.h>
#include "functions.h"
#include "SafeInput.h"
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define PI 3.14159265358979323846

char* shapesSelection(){
    char text[50];
    while(1){
    GetInput("Type the shape you would like to calculate the area and circumference off? ", text, 50);

    for (int i = 0; i < strlen(text); i++){
        text[i] = tolower(text[i]);
    }

    char* rect = "rectangle";
    char* para = "parallelogram";
    char* triangle = "triangle";
    char* circle = "circle";
    char* exit = "exit";

    if(strcmp(text, rect) == 0){
        return rect;
    }
    else if(strcmp(text, para) == 0){
        return para;
    }
    else if(strcmp(text, triangle) == 0){
        return triangle;
    }
    else if(strcmp(text, circle) == 0){
        return circle;
    }
    else if(strcmp(text, exit) == 0){
        return exit;
    }
    else{
        printf("Not a valid shape.\n");
    }
}
}

void calcRectangleParallelogram(float *resultArea, float *resultCircumference){
    float side1 = 0;
    float side2 = 0;
    GetInputFloat("Enter the lenght: ", &side1);
    GetInputFloat("Enter the height: ", &side2);
    *resultArea = side1 * side2;
    *resultCircumference = (side1 + side2) * 2;
}

float calcHypotenuse(float l, float h, float theta) {
    float radians = theta * PI / 180.0;    // Convert angle from degrees to radians
    float c = h / sin(radians);              // Calculate the hypotenuse using the sine function
    return c;
}

void calcTriangle(float *resultArea, float *resultCircumference){
    float side1 = 0;
    float side2 = 0;
    float angle = 0;
    
    GetInputFloat("Enter the lenght: ", &side1);
    GetInputFloat("Enter the height: ", &side2);
    GetInputFloat("Enter the angle: ", &angle);
    float side3 = calcHypotenuse(side1, side2, angle);
    *resultArea = side1 * side2 /2;
    *resultCircumference = side1 + side2 + side3;
}

void calcCircle(float *resultArea, float *resultCircumference){
    float radius = 0;
    GetInputFloat("Enter the radie: ", &radius);
    *resultArea = PI * radius * radius;
    *resultCircumference = 2 * PI * radius;
}

void shapesMenu(){

    printf("\nShapes Menu:\n");
    printf(" Rectangle\n");
    printf(" Parallelogram\n");
    printf(" Triangle\n");
    printf(" Circle\n");
    printf(" Exit\n");

    char* text = shapesSelection();
    char* rect = "rectangle";
    char* para = "parallelogram";
    char* triangle = "triangle";
    char* circle = "circle";
    char* exit = "exit";

    float resultArea = 0;
    float resultCircumference = 0;

    if(strcmp(text, rect) == 0){
        calcRectangleParallelogram(&resultArea, &resultCircumference);
        printf("\nThe area of the rectangle is: %.2f and the circumference is: %.2f\n", resultArea, resultCircumference);
    }
    else if(strcmp(text, para) == 0){
        calcRectangleParallelogram(&resultArea, &resultCircumference);
        printf("\nThe area of the parallelogram is: %.2f and the circumference is: %.2f\n", resultArea, resultCircumference);
    }
    else if(strcmp(text, triangle) == 0){
        calcTriangle(&resultArea, &resultCircumference);
        printf("\nThe area of the Triangle is: %.2f and the circumference is: %.2f\n", resultArea, resultCircumference);
    }
    else if(strcmp(text, circle) == 0){
        calcCircle(&resultArea, &resultCircumference);
        printf("\nThe area of the Circle is: %.2f and the circumference is: %.2f\n", resultArea, resultCircumference);
    }    
    else if(strcmp(text, exit) == 0){

    }
    else{
        printf("Not a valid shape.");
    }

}