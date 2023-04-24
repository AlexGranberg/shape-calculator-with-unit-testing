#ifndef __ROCKPAPERSCISSOR_H
#define __ROCKPAPERSCISSOR_H

void rockPaperScissorMenu();
int CpuRandPick();
void playGame();
void printScoreToFile(char *result);
int determineResult(int pick, int sel);

#endif