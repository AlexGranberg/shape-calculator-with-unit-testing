#include <stdio.h>
#include "SafeInput.h"
#include "unistd.h"
#include "functions.h"
#include <stdlib.h>
#include <math.h>


int choice(){
while(1){
    printf("\nMenu\n");
    printf("1. Shapes\n");
    printf("2. Calculator\n");
    printf("3. RockPaperScissor\n");
    printf("4. Exit\n");

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
