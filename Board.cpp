/********************************************
* Author:        	Catalin Popescu 		*
* Filename:      	Board.cpp				*
* Date modified: 	14-01-2016				*
* Description:		Implementation file for *
*					Board class    			*
*********************************************/

#include "Board.h"
#include <cstdio>

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

void Board::drawBoard()
{
	//1st line
	printf("__|"); 
	for (int column = 0; column < _size; ++column) {
		printf("_%d_|", column + 1 );
	}
	printf("\n"); //end of first line

	for (int row = 0; row < _size; ++row) {
		if (row < 9) {
			printf(" %d|", row + 1 ); 
		} else {
			printf("%d|", row + 1 ); 
		}

		for (int column = 0; column < _size; ++column) {
			printf("_%c_|", _board[row][column]);
		}
		printf("\n");	
	}
	
}



/*
1st column

_|___|___|___|
_|___|___|___|

*/