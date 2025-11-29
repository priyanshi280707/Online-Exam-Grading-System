#include<stdio.h>
#include "user.h"

float calcPercentage(int score, int total) {
    if (total == 0) return 0.0f;
    return (score * 100.0f) / total;
}

char calcGrade(float percent) {
    if (percent >= 90.0f) return 'A';
    if (percent >= 75.0f) return 'B';
    if (percent >= 50.0f) return 'C';
    if (percent >= 35.0f) return 'D';
    return 'F';
}

void displayResult(struct Student s, int score, float percent, char grade) {
    printf("\n----- RESULT -----\n");
    printf("Name       : %s\n", s.name);
    printf("Roll       : %d\n", s.roll);
    printf("Score      : %d/%d\n", score, TOTAL_Q);
    printf("Percentage : %.2f%%\n", percent);
    printf("Grade      : %c\n", grade);
}
