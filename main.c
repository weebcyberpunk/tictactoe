#include<stdio.h>
#include<string.h>

int tictactoe();
int tictacbot();
int help();

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
