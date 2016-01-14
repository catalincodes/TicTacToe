#include "Game.h"
#include <cstdio>
#include <iostream>

Game::Game()
{
	printf("Initializing game...\n");
	_numPlayers = getNumPlayers();
}

int Game::getNumPlayers()
{
	int numPlayers;
	do
	{
		printf("How many players ? ");
		cin >> numPlayers;
		if ((numPlayers < 2) || (numPlayers > 5)) {
			printf("Game can only work with 2-5 players. Please try again.\n");
		}
	} while ((numPlayers < 2) || (numPlayers > 5));
	return numPlayers;
}

//TODO: create a getNames function

