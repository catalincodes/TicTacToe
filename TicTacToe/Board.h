#pragma once
const int NUM_ROWS = 3;
const int NUM_COLS = 3;

class Board
{
public:
	Board(void);
	~Board(void);
	char checkState();
	char getValue(int x, int y);
	void Board::setValue(int x, int y, char value);
private:
	char board[NUM_ROWS][NUM_COLS];
};

