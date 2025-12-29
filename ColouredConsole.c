#include <stdio.h>
#include "ColouredConsole.h"

static char ForeColor[15];
static char BackColor[15];

void setForeColor(ConsoleColor foreColor) {
    snprintf(ForeColor, sizeof(ForeColor), "\033[38;5;%03dm", foreColor);
    printf("%s", ForeColor);
}

void setBackColor(ConsoleColor backColor) {
    snprintf(BackColor, sizeof(BackColor), "\033[48;5;%03dm", backColor);
    printf("%s", BackColor);
}

void resetColor() {
    printf("\033[0m");
}

void resetForeColor() {
    printf("\033[0m%s", BackColor);
}

void resetBackColor() {
    printf("\033[0m%s", ForeColor);
}