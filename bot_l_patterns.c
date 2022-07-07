int bot_l_patterns(char game[9]) {

    /*
     * A quick explain: L pattern is how I call
     * something like this:
     *
     * _/O/_
     * _/_/O
     * _/_/_
     *
     * The problem is that if O puts on 3, it'll
     * have two ways to win. Bot should avoid that
     */

    // again, if 10 no l pattern
    int house = 10;

    // with 1
    if (game[1] == 'O') {

        if      (game[5] == 'O') house = 2;
        else if (game[3] == 'O') house = 0;

    }

    // with 7
    if (game[7] == 'O') {

        if      (game[3] == 'O') house = 6;
        else if (game[5] == 'O') house = 8;

    }

    // wow this was short
    // now we return the house
    return(house);
}
