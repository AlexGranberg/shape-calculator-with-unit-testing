#include <stdio.h>
#include "functions.h"
#include "SafeInput.h"
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define ROCK 1
#define PAPER 2
#define SCISSOR 3


void calculateWinRate(double *winRate, int *wins, int *total) {
    char line[80];
    FILE *scoreBoard = fopen("scoreboard.txt", "r");
    if (scoreBoard == NULL) {
        printf("Failed to open scoreboard file");
        return;
    }
    rewind(scoreBoard);
    while (fgets(line, sizeof(line), scoreBoard)) {
        if (strstr(line, "win")) {
            (*wins)++;
        }
        (*total)++;
    }
    if (*total > 0) {
        *winRate = ((double)*wins / *total) * 100;
    }
    fclose(scoreBoard);
}

void printScoreToFile(char *result){
    FILE *scoreBoard = fopen("scoreboard.txt", "a");

    if(scoreBoard == NULL){
        printf("Failed to open scoreboard file");
        return;
    }

    double winRate = 0.0;
    int wins = 0;
    int total = 0;
    calculateWinRate(&winRate, &wins, &total);

    char buffer[80];
    time_t rawtime;
    struct tm *info;

    time( &rawtime );

    info = localtime( &rawtime );

    strftime(buffer,80,"%x - %X", info);
    fprintf(scoreBoard, "%s %s - Win Rate: %.2f%%\n", result, buffer, winRate);
    fclose(scoreBoard);

}

int determineResult(int cpuPick, int userSel) {
    if ((cpuPick == ROCK && userSel == PAPER) || (cpuPick == PAPER && userSel == SCISSOR) || (cpuPick == SCISSOR && userSel == ROCK)) {
        green(); printf("You won!\n"); reset();
        return 1;
    } else if ((cpuPick == ROCK && userSel == SCISSOR) || (cpuPick == PAPER && userSel == ROCK) || (cpuPick == SCISSOR && userSel == PAPER)) {
        red(); printf("You lost!\n"); reset();
        return -1;
    } else {
        yellow(); printf("It's a tie!\n"); reset();
        return 0;
    }
}

int CpuRandPick(){
    srand(time(NULL));
    int randNum = rand() % 3 + 1;
    return randNum;
}

void playGame(){
    system("cls");
    int sel;
    blue();
    printf("\nLet's play some Rock, Paper, Scissors!\n");
    reset();
    printf("Take your pick:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    GetInputInt("", &sel);

    int pick = CpuRandPick();
    int result = 0;

    switch (pick) {
    case 1:
        printf("Computer chose rock\n");
        break;
    case 2:
        printf("Computer chose paper\n");
        break;
    case 3:
        printf("Computer chose scissors\n");
        break;
}

    result = determineResult(pick, sel);

    char resultString[10];
    if (result == 1) {
        sprintf(resultString, "%s", "win");
    } else if (result == -1) {
        sprintf(resultString, "%s", "loss");
    } else {
        sprintf(resultString, "%s", "tie");
    }
    printScoreToFile(resultString);
}

void winRate(){
    FILE *scoreBoard = fopen("scoreboard.txt", "r");
    if (scoreBoard == NULL) {
        printf("Failed to open scoreboard file");
        return;
    }

    int wins = 0;
    int total = 0;
    char line[80];
    while (fgets(line, sizeof(line), scoreBoard)) {
        if (strstr(line, "win")) {
            wins++;
        }
        total++;
    }

    double winRate = 0.0;
    if (total > 0) {
        winRate = ((double)wins / total) * 100;
    }

    green(); printf("\n**** Win Rate ****\n **");reset(); 
    printf("   %.2f%%   ", winRate); 
    green(); printf("**\n******************");

    fclose(scoreBoard);
}

void rockPaperScissorMenu(){
int selection = 0;

while(1){
    blue();
    printf("\n::: Rock Paper Scissor Game :::\n");
    reset();
    printf("1. New Game\n");
    printf("2. Win Rate\n");
    printf("3. Exit\n");

    

        if(GetInputInt("Select choice: ", &selection));
        else{
            printf("Not a valid entry!\n");
        }
    if(selection == 1) playGame();
    else if(selection == 2) winRate();
    else if(selection == 3) break;
    }

}

