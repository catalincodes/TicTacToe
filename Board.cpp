#include "Board.h"

Board::Board(int size)
{
	_size = size;
	for (int row = 0; row < size; ++row) {
		for (int col = 0; col < size; ++col) {
			setEntry(row, col, '.');
		}
	}
}

char Board::getEntry(int row, int col)
{
	if ( (row < _size) && (col < _size) ) {
		return _board[row][col];
	}
	else {
		return '_';
	}
}

void Board::setEntry(int row, int col, char entry)
{
	if ( (row < _size) && (col < _size) ) {
		_board[row][col] = entry;
	}
}