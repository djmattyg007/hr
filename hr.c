#include <stdio.h>
#include <string.h>
#include <sys/ioctl.h>
#include <stdlib.h>

int printline(int columns) {
    for (int i = 0; i < columns; i++) {
        printf("#");
    }
    printf("\n");
    return 0;
}

int main(int argc, char * argv [])
{
    struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);
    int COLS = (w.ws_col <= 0 ? 80 : w.ws_col);
    int lines = 1;

    if (argc > 1) {
        lines = atoi(argv[1]);
    }
    for (int x = 1; x <= lines; x++) {
        printline(COLS);
    }

    return 0;
}

