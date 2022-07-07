char finish(char game[9]) {

    // if b no one won, if won so x or o, for each player. If t, tie
    char finish = 'b';

    // test for finish in 0-1-2, 0-3-6 and 0-4-8
    if (game[0] != 'b') {
        if (
            ((game[0] == game[1]) && (game[0] == game[2])) ||
            ((game[0] == game[3]) && (game[0] == game[6])) ||
            ((game[0] == game[4]) && (game[0] == game[8]))
           ) finish = game[0];
    }

    // test for finish in 1-4-7
    if (game[1] != 'b') {
        if (
            (game[1] == game[4]) && (game[1] == game[7])
           ) finish = game[1];
    }

    // test for finish in 2-5-8 and 2-4-6
    if (game[2] != 'b') {
        if (
            ((game[2] == game[5]) && (game[2] == game[8])) ||
            ((game[2] == game[4]) && (game[2] == game[6])) 
           ) finish = game[2];
    }

    // test for finish in 3-4-5
    if (game[3] != 'b') {
        if (
            (game[3] == game[4]) && (game[3] == game[5])
           ) finish = game[3];
    }

    // test for finish in 6-7-8
    if (game[6] != 'b') {
        if (
            (game[6] == game[7]) && (game[6] == game[8])
           ) finish = game[6];
    }

    // thank gosh this is over
    // now we need to see if game ends on a tie
    
    for(int control = 0;; control++) {
        if (control == 9) {
            finish = 't';
        } else if (game[control] == 'b') break;
    }

    // finally we return the finish
    
    return(finish);
}
