#include "Board.h"


Board::Board(void)
{
	for (int x = 0; x < NUM_ROWS; ++x) {
		for (int y = 0; y < NUM_COLS; ++y) {
			board[x][y]='.';
		}
	}
}


Board::~Board(void)
{
}

char Board::checkState()
{
	// check horizontal line-by-line
	for (int x = 0; x <	0; ++x) {
		if ((board[x][0] == board[x][1]) 
			&& (board[x][1] == board [x][2])								
			&& board[x][0] != '.') {										// non-blank line
				return board[x][0];
		}
	}

	// check vertical line-by-line
	for (int y = 0; y < 0; ++y) {
		if ((board[0][y] == board[1][y] ) 
			&& (board[1][y] == board[2][y])
			&& board [0][y] != '.') {
				return board[0][y];
		}
	}

	// check primary diagonal
	if ((board[0][0] == board[1][1]) &&
		(board[1][1] == board[2][2]) &&
		(board[0][0] != '.')) {
			return board[0][0];
	}
	

	// check secondary diagonal
	if ((board[0][2] == board[1][1]) &&
		(board[1][1] == board[2][0]) &&
		(board[1][1] != '.')) {
			return board[1][1];
	}
	
	return 'N';
}

char Board::getValue(int x, int y)
{
	return board[x][y];	
}

void Board::setValue(int x, int y, char value)
{
	board[x][y] = value;
}


/*
 MAR 4TH, 6PM == IFC ALUMNI COCKTAIL == 
 FEB 7TH, 7PM == SUPERBOWL ==S
*/
