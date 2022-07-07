#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int print_game(char game[9]);
char finish(char game[9]);
int bot(char game[9], int bot_game[9], int round);

int tictacbot() {

    char game[9] = { 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b' };
    int bot_game[9];
    char player = 'O';
    int house;
    int round = 0;
    char str_house[5];

    printf("Player X Computer tic-tac-toe.\n");

    print_game(game);
    for (;;) {

        if (player == 'O') {
            for (;;) {
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

                // if valid, dial house
                } else {
                    game[house - 1] = 'O';
                    player = 'X';

                    break;
                }
            }

        } else {

            house = bot(game, bot_game, round);
            game[house] = 'X';
            bot_game[round] = house;
            player = 'O';

        }

        round++;

        // print the game and test for finish
        print_game(game);

        char end = finish(game);
        if (end == 't') printf("Tie!\n");
        else if (end == 'X') printf("Computer's won!\n");
        else if (end == 'O') printf("Player's won!\n");
        else continue;

        if (end != 'b') return(0);
    }
}
