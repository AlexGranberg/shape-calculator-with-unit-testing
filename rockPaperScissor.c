#include <stdio.h>
#include "functions.h"
#include "SafeInput.h"
#include <time.h>
#include <stdlib.h>

int CpuRandPick(){
    srand(time(NULL));
    int randNum = rand() % 3 + 1;
    return randNum;
}

void playGame(){
    int sel;
    printf("\nLets play som Rock, Paper, Scissor!\n");
    printf("Take your pick:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissor\n");
    GetInputInt("", &sel);
    int pick = CpuRandPick();
    if(pick == 1 && sel == 2) printf("Computer chosed ROCK! You won\n");
    else if(pick == 1 && sel == 3) printf("Computer chosed ROCK! You loose\n");
    else if(pick == 1 && sel == 1) printf("Computer chosed ROCK! It's a tie\n");

    else if(pick == 2 && sel == 2) printf("Computer chosed PAPER! It's a tie\n");
    else if(pick == 2 && sel == 3) printf("Computer chosed PAPER! You won\n");
    else if(pick == 2 && sel == 1) printf("Computer chosed PAPER! You loose\n");
    
    else if(pick == 3 && sel == 2) printf("Computer chosed SCISSOR! You loose\n");
    else if(pick == 3 && sel == 3) printf("Computer chosed SCISSOR! It's a tie\n");
    else if(pick == 3 && sel == 1) printf("Computer chosed SCISSOR! You won\n");
    


}

void score(){
    printf("hejScore\n");
}

void rockPaperScissorMenu(){
int selection = 0;

while(1){
    blue();
    printf("\n::: Rock Paper Scissor Game :::\n");
    reset();
    printf("1. New Game\n");
    printf("2. Highscore\n");
    printf("3. Exit\n");

    

        if(GetInputInt("Select choice: ", &selection));
        else{
            printf("Not a valid entry!\n");
        }
    if(selection == 1) playGame();
    else if(selection == 2) score();
    else if(selection == 3) break;
    }

}

