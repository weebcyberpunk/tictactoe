tictactoe : *.c
	cc *.c -o tictactoe

.PHONY : test
test : tictactoe
	./tictactoe
	./tictactoe --computer
