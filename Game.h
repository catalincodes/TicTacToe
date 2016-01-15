/********************************************
* Author:        	Catalin Popescu 		*
* Filename:      	Game.h 					*
* Date modified: 	15-01-2016				*
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
	int playGame();
private:
	Board _board;
	int _numPlayers;
	int _winCondition; //number of consecutive entries required for winning
	int _size;
	Player _listPlayers[MAX_PLAYERS];
	void setNumPlayers();
	void setPlayerNames();
	void getNewCoord(int &xCoord,int &yCoord);
	void setWinCondition(); 
	void setBoardSize();
};