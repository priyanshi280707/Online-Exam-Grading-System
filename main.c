#include <stdio.h>
#include "user.h"
#include "evaluation.h"
#include "grading.h"

int main() {
    struct Student s;

    inputStudentData(&s);

    int score = evaluate(s.answers);
    float percent = calcPercentage(score, TOTAL_Q);
    char grade = calcGrade(percent);

    displayResult(s, score, percent, grade);

    return 0;
}
