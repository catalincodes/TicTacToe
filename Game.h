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
	Board _board;  //board on which the game is played
	int _numPlayers; // numbers of players
	int _winCondition; //number of consecutive entries required for winning
	Player _listPlayers[MAX_PLAYERS]; //list of players (capacity = MAX_PLAYERS, size = _numPlayers)
	void setNumPlayers(); //gets the number of players from the user and sets it (part of constructor)
	void setPlayerNames(); //gets the player names and markers from the user and sets them
	void getNewCoord(int &xCoord,int &yCoord);
	void setWinCondition();  //gets the winning condition from the user
	void setBoardSize(); //gets the board size from the user and sets it
	void clearScreen(); //clears the screen
	bool isFree(int x, int y); //checks whether the given location is available
};