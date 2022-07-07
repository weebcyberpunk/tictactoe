int bot_diagonals(char game[9]) {

    /*
     * Quick explain: diagonals are like this:
     *
     * O/_/_
     * _/_/_
     * _/_/O
     *
     * The problem is that if the player dial
     * 2 or 6 he'll have two ways to win.
     *
     * Avoiding this is more complicated. Any
     * game situation where this can be found,
     * the bot will have the middle dialed. So
     * to avoid we dial, in this example, 7,
     * so the player will be forced to dial 1:
     *
     * O/O/_
     * _/X/_
     * _/X/O
     */

    // again if 10 no diagonal
    int house = 10;

    // well checking this is basically a big if
    if (((game[0] == 'O') && (game[8] == 'O')) || ((game[2] == 'O') && (game[6] == 'O'))) house = 7;
    
    return(house);
}
