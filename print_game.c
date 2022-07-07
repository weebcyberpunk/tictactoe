#include<stdio.h>

int print_game(char game[9]) {
    char view[9] = { '_', '_', '_', '_', '_', '_', '_', '_', '_' };
    char num[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

    // if house is dialed
    for(int control = 0; control < 9; control++) {
        if (game[control] != 'b') {
            view[control] = game[control];
            num[control] = game[control];

        }
    }

    // show houses
    printf("\n");
    printf("%c/%c/%c\t%c/%c/%c\n", num[0], num[1], num[2], view[0], view[1], view[2]);
    printf("%c/%c/%c\t%c/%c/%c\n", num[3], num[4], num[5], view[3], view[4], view[5]);
    printf("%c/%c/%c\t%c/%c/%c\n", num[6], num[7], num[8], view[6], view[7], view[8]);
    printf("\n");

    return(0);
}
