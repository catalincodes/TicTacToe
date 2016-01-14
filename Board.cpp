/********************************************
* Author:        	Catalin Popescu 		*
* Filename:      	Board.cpp				*
* Date modified: 	14-01-2016				*
* Description:		Implementation file for *
*					Board class    			*
*********************************************/

#include "Board.h"

Board::Board()
{
	for (int row = 0; row < MAX_SIZE; ++row) {
		for (int col = 0; col < MAX_SIZE; ++col) {
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

void Board::setSize(int size)
{
	_size = size;
}

int Board::getSize()
{
	return _size + 1;
}