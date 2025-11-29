#ifndef GRADING_H
#define GRADING_H

#include "user.h"

float calcPercentage(int score, int total);
char calcGrade(float percent);
void displayResult(struct Student s, int score, float percent, char grade);

#endif // GRADING_H
