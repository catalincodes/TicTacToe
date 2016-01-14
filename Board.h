#pragma once

const int MAX_ROWS = 15;
const int MAX_COLS = 15;
class Board
{
public:
	Board(int size);
	char getEntry(int row, int col);
	void setEntry(int row, int col, char entry);
private:
	char _board[MAX_ROWS][MAX_COLS];
	int _size;
};