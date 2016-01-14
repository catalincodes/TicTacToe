CFLAGS = -std=c++11
TicTacToe: main.o Game.o
	c++ $(CFLAGS) *.o -o TicTacToe
Player.o:
	c++ $(CFLAGS) -c Player.cpp -o Player.o
Board.o:
	c++ $(CFLAGS) -c Board.cpp -o Board.o
Game.o: Player.o Board.o
	c++ $(CFLAGS) -c Game.cpp -o Game.o
main.o:
	c++ $(CFLAGS) -c main.cpp -o main.o
clean:
	rm -rf *.o *.exe