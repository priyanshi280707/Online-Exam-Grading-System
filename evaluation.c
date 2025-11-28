#include <ctype.h>
#include "evaluation.h"
#include "user.h"

static const char key[TOTAL_Q] = {'A','C','B','D','A','B','D','A','C','B'};

int evaluate(char ans[]) {
    int score = 0;
    for (int i = 0; i < TOTAL_Q; ++i) {
        char user = toupper((unsigned char)ans[i]);
        if (user == key[i]) score++;
    }
    return score;
}
