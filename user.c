#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "user.h"

void strip_newline(char *s) {
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }
}

void inputStudentData(struct Student *s) {
    printf("Enter Name: ");
    fgets(s->name, sizeof(s->name), stdin);
    strip_newline(s->name);

    printf("Enter Roll Number: ");
    scanf("%d", &s->roll);

    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Clear buffer

    printf("\nEnter Answers (A/B/C/D):\n");
    for (int i = 0; i < TOTAL_Q; i++) {
        printf("Q%d: ", i + 1);

        char ans;
        scanf(" %c", &ans);
        s->answers[i] = toupper(ans);
    }
}
