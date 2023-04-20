#ifndef __SHAPES_H
#define __SHAPES_H

void shapesMenu();
char* shapesSelection();
void calcRectangleParallelogram(float side1, float side2, float *resultArea, float *resultCircumference);
void calcCircle(float radius, float *resultArea, float *resultCircumference);
void calcTriangle(float side1, float side2, float angle, float *resultArea, float *resultCircumference);
float calcHypotenuse(float l, float h, float theta);


#endif