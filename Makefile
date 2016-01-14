CFLAGS = -std=c++11
all:
	mingw32-make player board main
	c++ $(CFLAGS) *.o -o TicTacToe
player:
	c++ $(CFLAGS) -c Player.cpp -o Player.o
board:
	c++ $(CFLAGS) -c Board.cpp -o Board.o
main:
	c++ $(CFLAGS) -c main.cpp -o main.o
clean:
	rm -rf *.o *.exe