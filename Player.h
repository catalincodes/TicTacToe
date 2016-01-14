/********************************************
* Author:        	Catalin Popescu 		*
* Filename:      	Player.h				*
* Date modified: 	14-01-2016				*
* Description:		Header file for Player 	*
*					class          			*
*********************************************/
#pragma once
#include <iostream>
using namespace std;


class Player
{
public:
	Player();
	Player(string name, char marker);
	string getName();
	char getMarker();
	void setName(string name);
	void setMarker(char marker);
private:
	string _name;
	char _marker;
};