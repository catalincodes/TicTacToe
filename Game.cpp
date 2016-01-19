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
#include <sstream>
using namespace std;

Game::Game()
{

	printf("Initializing game...\n");
	//setNumPlayers();
	//setPlayerNames();
	setBoardSize();
	//setWinCondition();	
	// for debugging purposes:
	drawBoard();
}

void Game::setNumPlayers()
{
	int numPlayers = 0;
	string inputBuffer = "";
	while ((numPlayers < 2) || (numPlayers > 5))
	{
		
		while(true)
		{
			printf("How many players ? ");
			getline(cin, inputBuffer);
			stringstream ss(inputBuffer);
			if (ss >> numPlayers)
				{break;}
			printf("Invalid number!\n");
		}
		
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
		string inputBuffer = "";
		
		string playerName;
		getline(cin, inputBuffer);
		playerName = inputBuffer;
		
		char playerMarker;
		while (true) {
		   printf("Please enter your marker : ");
		   getline(cin, inputBuffer);

		   if (inputBuffer.length() == 1) {
		   		playerMarker = inputBuffer[0];
		    	break;
		   } 
		   printf("The marker has to be one character long.\n");
		   
		}
		
		//input complete. Assigning values
		_listPlayers[currentPlayerID].setName(playerName);
		_listPlayers[currentPlayerID].setMarker(playerMarker);
	}
}

void Game::setBoardSize()
{
	string inputBuffer = "";
	int size = 0;

	while (size < 3 || size > 15) {
		while(true) {

		printf("How big will the board be? : ");
		getline(cin, inputBuffer);
		stringstream ss(inputBuffer);

		if (ss >> size)
			{break;}
		printf("Invalid number!\n");
		}
		
		if (size < 3 || size > 15)  {
			printf("Board size must be between 3 and 15\n");
		}
	} 
	_board.setSize(size);
}

void Game::setWinCondition()
{
	int winCondition = 0;
	string inputBuffer;
	while (winCondition < 3 || winCondition > _board.getSize()) {

		while (true) {

			printf("How many consecutive entries are needed to win? : ");
			
			getline(cin, inputBuffer);
			stringstream ss(inputBuffer);
			
			if (ss >> winCondition) {
				break;
			} 
	
			printf("Invalid entry\n");
		
		}

		if (winCondition < 3 || winCondition > _board.getSize())  {
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
 	bool isNotFree = true;
 	string inputBuffer = "";
 	while (isNotFree) {
 		
 		while(true) {
			printf("Please enter the x coordinates : ");
			getline(cin, inputBuffer);
			stringstream ss(inputBuffer);
			if (ss >> xCoord)
				{break;}
			printf("Invalid number!\n");
		}

		while(true) {
			printf("Please enter the y coordinates : ");
			getline(cin, inputBuffer);
			stringstream ss(inputBuffer);
			if (ss >> yCoord)
				{break;}
			printf("Invalid number!\n");
		}

		isNotFree = !(isFree(xCoord, yCoord));

	if (!(isNotFree)) {
		printf("The position you chose is occupied already.\n");
	}
 		
 	}
 			
 }
 
 bool Game::isFree(int x, int y)
 {
 	if (_board.getEntry(x,y) == '_')
 		{return true;}
 	else
 		{return false;}
 }

 void Game::drawBoard()
 {
 	_board.drawBoard();
 }