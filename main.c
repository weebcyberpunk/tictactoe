#include<stdio.h>
#include<string.h>

int tictactoe();
int tictacbot();
int help();

/*
 * Copyright 2021 © GG
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy of 
 * this software and associated documentation files (the “Software”), to deal 
 * in the Software without restriction, including without limitation the rights to 
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies 
 * of the Software, and to permit persons to whom the Software is furnished to do 
 * so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all 
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
 * SOFTWARE.
 */

/*
 * author GG weebcyberpunk@gmail.com
 * version 1.0.0
 */
int main(int argc, char *argv[]) {
    
    int status = 0;
    
    if (argc == 1) {

        status = tictactoe();

    } else if (argc == 2) {

        if ((strcmp(argv[1], "-c") == 0) || (strcmp(argv[1], "--computer") == 0)) status = tictacbot();
        else if ((strcmp(argv[1], "-p") == 0) || (strcmp(argv[1], "--player") == 0)) status = tictactoe();
        else status = help();

    } else {

        status = help();

    }

    return(status);

}
