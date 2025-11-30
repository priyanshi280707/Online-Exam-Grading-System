#ifndef USER_H
#define USER_H

#define TOTAL_Q 10

struct Student {
    char name[100];
    int roll;
    char answers[TOTAL_Q];
};

void inputStudentData(struct Student *s);

#endif
