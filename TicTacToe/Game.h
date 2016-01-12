#pragma once
#include "Board.h"

enum state {NOT_STARTED, IN_PROGRESS, COMPLETED};
enum playerId {PLAYER_X, PLAYER_0};

class Game
{
public:
	Game(void);  //should receive player names & symbols as parameters
	void executeGame();
	void updateState();
	void drawBoard();
private:
	Board gameBoard;
	// why is there a problem making enum variables static??
	// player names
	state gameState;
	char currentPlayer;
};

