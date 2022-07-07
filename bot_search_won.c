int bot_search_won(char game[9]) {

    // if house == 10 no won
    int house = 10;

    // with 0
    if (game[0] == 'X') {

        // 0-1-2
        if ((game[1] == 'X') && (game[2] == 'b')) house = 2;
        if ((game[2] == 'X') && (game[1] == 'b')) house = 1;

        // 0-4-8
        if ((game[4] == 'X') && (game[8] == 'b')) house = 8;
        if ((game[8] == 'X') && (game[4] == 'b')) house = 4;

        // 0-3-6
        if ((game[3] == 'X') && (game[6] == 'b')) house = 6;
        if ((game[6] == 'X') && (game[3] == 'b')) house = 3;

    } else if (game[0] == 'b') {
        
        if ((game[1] == game[2]) && (game[1] == 'X')) house = 0;
        if ((game[4] == game[8]) && (game[4] == 'X')) house = 0;
        if ((game[3] == game[6]) && (game[3] == 'X')) house = 0;

    }

    // with 1
    if (game[1] == 'X') {

        // 1-4-7
        if ((game[4] == 'X') && (game[7] == 'b')) house = 7;
        if ((game[7] == 'X') && (game[4] == 'b')) house = 4;

    } else if (game[1] == 'b') {

        if ((game[4] == game[7]) && (game[4] == 'X')) house = 1;

    }

    // with 2
    if (game[2] == 'X') {

        // 2-5-8
        if ((game[5] == 'X') && (game[8] == 'b')) house = 8;
        if ((game[8] == 'X') && (game[5] == 'b')) house = 5;

        // 2-4-6
        if ((game[4] == 'X') && (game[6] == 'b')) house = 6;
        if ((game[6] == 'X') && (game[4] == 'b')) house = 4;

    } else if (game[2] == 'b') {

        if ((game[5] == game[8]) && (game[5] == 'X')) house = 2;
        if ((game[4] == game[6]) && (game[4] == 'X')) house = 2;

    }

    // with 3
    if (game[3] == 'X') {

        // 3-4-5
        if ((game[4] == 'X') && (game[5] == 'b')) house = 5;
        if ((game[5] == 'X') && (game[4] == 'b')) house = 4;

    } else if (game[3] == 'b') {

        if ((game[4] == game[5]) && (game[4] == 'X')) house = 3;

    }

    // with 6
    if (game[6] == 'X') {

        // 6-7-8
        if ((game[7] == 'X') && (game[8] == 'b')) house = 8;
        if ((game[8] == 'X') && (game[7] == 'b')) house = 7;

    } else if (game[6] == 'b') {

        if ((game[7] == game[8]) && (game[7] == 'X')) house = 6;

    }

    return(house);
}
