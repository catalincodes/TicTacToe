/********************************************
* Author:        	Catalin Popescu 		*
* Filename:      	Game.cpp				*
* Date modified: 	15-01-2016				*
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
	setBoardSize();
	setWinCondition();
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

void Game::setBoardSize()
{
	printf("How big will the board be? : ");
	int size = 0;
	while (size < 3 && size > 15) {
		cin >> size;
		if (size < 3 && size > 15)  {
			printf("Board size must be between 5 and 15\n");
		}
	} 
	_board.setSize(size);
}

void Game::setWinCondition()
{
	printf("How many consecutive entries are needed to win? : ");
	int winCondition = 0;
	while (winCondition < 3 && winCondition > _board.getSize()) {
		cin >> winCondition;
		if (winCondition < 3 && winCondition > _board.getSize())  {
			printf("Must be at least three and you cannot have more than the size of the board\n");
		}
	}
	_winCondition = winCondition;
}

int Game::playGame()
{
	int currentPlayerID;
	bool isCompleted = false;
	int winnerID = -1;

	// clearScreen - TBDev
	// draw board - TBDev
	int xCoord = 0, yCoord = 0;
	getNewCoord(xCoord, yCoord);
	// placeEntry - X,Y
	// check if won
		// if true 
			// isCompleted = true, winnerID = currentPlayerID
		// else 
			// check if still playable
				// if false isCompleted = true, winnerID=4
	return winnerID;
}

void Game::clearScreen()
{
	for (int screenLine = 0; screenLine < 25; ++screenLine)
	{
		printf("\n");
	}
}

 void Game::getNewCoord(int &xCoord, int &yCoord) 
 {
 	bool isFree = false;
 	while (isFree == false) {
 		// print "Please enter the x coordinates : "
 		// input xCoord
 		// print "Please enter the y coordinates : "
 		// input yCoord
 	}
 		// isFree(xCoord, yCoord)
			// if true return
 }