#pragma once
#include "Board.h"
#include "Player.h"

const int MAX_PLAYERS = 5;
class Game
{
public:
	Game();
private:
	Board _board;
	int _numPlayers;
	Player _listPlayers[MAX_PLAYERS];
	int setNumPlayers();
	void setPlayerNames();
	// create a getNames
};