int bot_horse_patterns(char game[9]) {

    /*
     * A quick explain: horse patterns are what I call when
     * the O puts the pieces like this:
     *
     * O/_/_
     * _/_/O
     * _/_/_
     *
     * The problem is that, in this example, if O puts on 3,
     * it'll have two options to win. The bot should avoid
     * that at all cost.
     */

    // again if 10 no horse pattern
    int house = 10;

    // with 0
    if (game[0] == 'O') {

        if      ((game[5] == 'O') && (game[2] == 'b')) house = 2;
        else if ((game[7] == 'O') && (game[6] == 'b')) house = 6;    

    }

    // with 2
    if (game[2] == 'O') {

        if      ((game[3] == 'O') && (game[0] == 'b')) house = 0;
        else if ((game[7] == 'O') && (game[8] == 'b')) house = 8;

    }

    // with 6
    if (game[6] == 'O') {

        if      ((game[1] == 'O') && (game[0] == 'b')) house = 0;
        else if ((game[5] == 'O') && (game[8] == 'b')) house = 8;

    }

    // with 8
    if (game[8] == 'O') {

        if      ((game[1] == 'O') && (game[2] == 'b')) house = 2;
        else if ((game[3] == 'O') && (game[6] == 'b')) house = 6;

    }

    // this was quicker
    // now we return the house
    return(house);
}
