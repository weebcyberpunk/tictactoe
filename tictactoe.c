#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int print_game(char game[9]);
char finish(char game[9]);

int tictactoe() {

    char game[9] = { 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b' };
    char player = 'O';
    char str_house[5];
    int house;

    printf("Two player tic-tac-toe\n");

    print_game(game);
    for(;;) {
        // get house
        printf("Enter the number of the house you want to dial: ");
        scanf("%s", &str_house);

        house = atoi(str_house);

        // if "exit"
        if (strcmp(str_house, "exit") == 0) {
            return(0);

        // test valid
        } else if ((house > 9) || (house < 1)) {
            printf("Invalid house.\n");
            continue;

        // test dial
        } else if (game[house - 1] != 'b') {
            printf("This house was already dialed.\n");
            continue;

        // if valid, test player
        } else {
            if (player == 'O') {
                game[house - 1] = 'O';
                player = 'X';

            } else { 
                game[house - 1] = 'X';
                player = 'O';
            }

            // print the game and test for finish
            print_game(game);

            char end = finish(game);
            if (end == 't') printf("Tie!\n");
            else if (end == 'X') printf("X's won!\n");
            else if (end == 'O') printf("O's won!\n");
            else continue;

            if (end != 'b') return(0);
        }
    }
}
