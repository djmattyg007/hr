#include <stdio.h>
#include <sys/ioctl.h>
#include <stdlib.h>

int main(int argc, char *argv [])
{
    struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);
    int COLS = (w.ws_col > 0 ? w.ws_col : 80);
    int lines = 1;
    if (argc > 1) {
        lines = atoi(argv[1]);
    }

    char outchar[COLS];
    for (int i = 0; i < COLS; i++) {
        outchar[i] = '#';
    }

    for (int x = 1; x <= lines; x++) {
        printf("%s\n", outchar);
    }

    return 0;
}
