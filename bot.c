int bot_search_won(char game[9]);
int bot_search_player_won(char game[9]);
int bot_think(char game[9]);
int bot_horse_patterns(char game[9]);
int bot_l_patterns(char game[9]);
int bot_diagonals(char game[9]);
int bot_attack(char game[9]);

int bot(char game[9], int bot_game[9], int round) {
    // if 10 no house choosed
    int house = 10;

    // in first round, decide between 4 and 2
    if (round == 1) {
        if (game[4] == 'b') house = 4;
        else house = 2;

        return(house);

    }

    // search for bot won
    house = bot_search_won(game);
    if (house != 10) return(house);

    house = bot_search_player_won(game);
    if (house != 10) return(house);

    // think
    
    // first if 2 == X (because 4 == O), 4 and 6 == O, dial 0
    if ((game[4] == 'O') && (game[6] == 'O')) return(0);

    // now we search the horse patterns
    house = bot_horse_patterns(game);
    if (house != 10) return(house);

    // now we search the l patterns
    house = bot_l_patterns(game);
    if (house != 10) return(house);

    // now we search the diagonals
    house = bot_diagonals(game);
    if (house != 10) return(house);

    // if any defense has been done, we start attacking
    house = bot_attack(game);

    return(house);
}
