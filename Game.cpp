/********************************************
* Author:        	Catalin Popescu 		*
* Filename:      	Game.cpp				*
* Date modified: 	14-01-2016				*
* Description:		Implementation file for *
*					Game class    			*
*********************************************/

#include "Game.h"
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

Game::Game()
{
	printf("Initializing game...\n");
	setNumPlayers();
	setPlayerNames();
}

void Game::setNumPlayers()
{
	int numPlayers = 0;
	while ((numPlayers < 2) || (numPlayers > 5))
	{
		printf("How many players ? ");
		cin >> numPlayers;
		if ((numPlayers < 2) || (numPlayers > 5)) {
			printf("Game can only work with 2-5 players. Please try again.\n");
		}
	}
	_numPlayers = numPlayers;
}

void Game::setPlayerNames()
{
	printf("Time to enter the names of the players.\n");
	for(int currentPlayerID = 0;
		currentPlayerID < _numPlayers;
		++currentPlayerID) {
		
		printf("Please enter your name, Player %d : ", currentPlayerID+1);
		string stringBuffer;
		cin >> stringBuffer;

		printf("Please enter your marker : ");
		char charBuffer;
		cin >> charBuffer;

		_listPlayers[currentPlayerID].setName(stringBuffer);
		_listPlayers[currentPlayerID].setMarker(charBuffer);
	}
}

