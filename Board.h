/********************************************
* Author:        	Catalin Popescu 		*
* Filename:      	Board.h					*
* Date modified: 	14-01-2016				*
* Description:		Header file for Board  	*
*					class          			*
*********************************************/
#pragma once

const int MAX_SIZE = 15;
class Board
{
public:
	Board();
	char getEntry(int row, int col);
	void setEntry(int row, int col, char entry);
	void setSize(int size);
	int getSize();
private:
	char _board[MAX_SIZE][MAX_SIZE];
	int _size;
};