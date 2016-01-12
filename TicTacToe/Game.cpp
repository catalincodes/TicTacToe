#include "Game.h"
#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;
//TODO: replace cout with printf
Game::Game(void) //should receive player names & symbols as parameters
{
	mt19937 randomEngine(time(NULL));
	uniform_int_distribution<int> coinFlip(0,1);
	if (coinFlip(randomEngine) == 0) {
		currentPlayer = 'X'; // current player = player1 symbol
	}
	else {
		currentPlayer = '0'; // current player = player 2 symbol
	}
	//decide on chance who is the starting player
	gameState = NOT_STARTED;
}

void Game::drawBoard()
{
	
	cout << " | 1 | 2 | 3 |" << endl;
	cout << "--------------" << endl;
	for (int x = 0; x < 3; ++x)
	{
		cout << x+1 << "| "  << gameBoard.getValue(x,0) << " | " << gameBoard.getValue(x,1) << " | " << gameBoard.getValue(x,2) << " |" << endl;
		cout << "--------------" << endl;
	}
	//cout << "-------" << endl;
}

void Game::executeGame()
{
	// checks if the game has already began and/or begins it
	if (gameState == NOT_STARTED) { gameState = IN_PROGRESS; }
	

	while (gameState != COMPLETED)
	{
		// call function that get coordinates and if place is empty, place the marker of the current player
		//swap players
		updateState();
	}
}

void Game::playerMove()
{

}

void Game::updateState()
{
	char currentGameState = gameBoard.checkState();
	if (currentGameState == 'X' || currentGameState == '0'){ //it returned X or 0 as a winner. should be player1Marker and p
		gameState = COMPLETED;
	}

}