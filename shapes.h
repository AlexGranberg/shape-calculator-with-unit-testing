#ifndef __SHAPES_H
#define __SHAPES_H

void shapesMenu();
char* shapesSelection();
void calcRectangleParallelogramCircumference(float side1, float side2, float *resultCircumference);
void calcRectangleParallelogramArea(float side1, float side2, float *resultArea);
void calcCircleCircumference(float radius, float *resultCircumference);
void calcCircleArea(float radius, float *resultArea);
void calcTriangleCircumference(float side1, float side2, float angle, float *resultCircumference);
void calcTriangleArea(float side1, float side2, float *resultArea);
float calcHypotenuse(float l, float h, float theta);


#endif