int bot_attack(char game[9]) {

    int house = 10;

    if (game[4] == 'X') {

        if (game[0] == 'b') house = 0;
        else if (game[2] == 'b') house = 2;
        else if (game[6] == 'b') house = 6;
        else if (game[8] == 'b') house = 8;

    }
    
    return(house);
}


