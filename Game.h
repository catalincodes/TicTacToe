/********************************************
* Author:        	Catalin Popescu 		*
* Filename:      	Game.h 					*
* Date modified: 	14-01-2016				*
* Description:		Header file for Game  	*
*					class          			*
*********************************************/

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
	void setNumPlayers();
	void setPlayerNames();
	// create a getNames
};