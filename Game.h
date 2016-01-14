#pragma once
#include "Board.h"
#include "Player.h"

const int MAX_PLAYERS = 5;
class Game
{
public:
	Game();
private:
	Board board();
	int numPlayers;
	Player listPlayers[MAX_PLAYERS];
	/* data */
};