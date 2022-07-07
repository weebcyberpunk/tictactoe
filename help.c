#include<stdio.h>

int help() {
    FILE *help;
    help = fopen("/usr/share/tictactoe/help.txt", "r");

    if (help == NULL) {
        printf("no help file on /usr/share/tictactoe/help.txt\n");

        return(1);

    }

    for (;;) {
        char c = getc(help);

        if (c == EOF) break;

        printf("%c", c);
    }

    printf("\n");

    fclose(help);

    return(0);
}
