#include <stdio.h>
#include <stdlib.h>
#include "SafeInput.h"
#include <stdbool.h>
#include "functions.h"
#include "calculator.h"
#include "shapes.h"
#include "rockPaperScissor.h"


int main(){

system("cls");

while(1){
    int sel = choice();
    if(sel == 1) shapesMenu();
    if(sel == 2) calculatorMenu();
    if(sel == 3) rockPaperScissorMenu();
    if(sel == 4) break;


}
return 0;


}

