int bot_search_player_won(char game[9]) {

    // if house == 10 no won
    int house = 10;

    // with 0
    if (game[0] == 'O') {

        // 0-1-2
        if ((game[1] == 'O') && (game[2] == 'b')) house = 2;
        if ((game[2] == 'O') && (game[1] == 'b')) house = 1;

        // 0-4-8
        if ((game[4] == 'O') && (game[8] == 'b')) house = 8;
        if ((game[8] == 'O') && (game[4] == 'b')) house = 4;

        // 0-3-6
        if ((game[3] == 'O') && (game[6] == 'b')) house = 6;
        if ((game[6] == 'O') && (game[3] == 'b')) house = 3;

    } else if (game[0] == 'b') {
        
        if ((game[1] == game[2]) && (game[1] == 'O')) house = 0;
        if ((game[4] == game[8]) && (game[4] == 'O')) house = 0;
        if ((game[3] == game[6]) && (game[3] == 'O')) house = 0;

    }

    // with 1
    if (game[1] == 'O') {

        // 1-4-7
        if ((game[4] == 'O') && (game[7] == 'b')) house = 7;
        if ((game[7] == 'O') && (game[4] == 'b')) house = 4;

    } else if (game[1] == 'b') {

        if ((game[4] == game[7]) && (game[4] == 'O')) house = 1;

    }

    // with 2
    if (game[2] == 'O') {

        // 2-5-8
        if ((game[5] == 'O') && (game[8] == 'b')) house = 8;
        if ((game[8] == 'O') && (game[5] == 'b')) house = 5;

        // 2-4-6
        if ((game[4] == 'O') && (game[6] == 'b')) house = 6;
        if ((game[6] == 'O') && (game[4] == 'b')) house = 4;

    } else if (game[2] == 'b') {

        if ((game[5] == game[8]) && (game[8] == 'O')) house = 2;
        if ((game[4] == game[6]) && (game[8] == 'O')) house = 2;

    }

    // with 3
    if (game[3] == 'O') {

        // 3-4-5
        if ((game[4] == 'O') && (game[5] == 'b')) house = 5;
        if ((game[5] == 'O') && (game[4] == 'b')) house = 4;

    } else if (game[3] == 'b') {

        if ((game[4] == game[5]) && (game[4] == 'O')) house = 3;

    }

    // with 6
    if (game[6] == 'O') {

        // 6-7-8
        if ((game[7] == 'O') && (game[8] == 'b')) house = 8;
        if ((game[8] == 'O') && (game[7] == 'b')) house = 7;

    } else if (game[6] == 'b') {

        if ((game[7] == game[8]) && (game[7] == 'O')) house = 6;

    }

    return(house);
}
/// }}}
