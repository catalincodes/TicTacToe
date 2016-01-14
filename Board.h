#pragma once

const int MAX_ROWS = 15;
const int MAX_COLS = 15;
class Board
{
public:
	Board(int size);
private:
	char _board[MAX_ROWS][MAX_COLS];
	int _size;
};