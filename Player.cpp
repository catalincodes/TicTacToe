/********************************************
* Author:        	Catalin Popescu 		*
* Filename:      	Player.cpp				*
* Date modified: 	14-01-2016				*
* Description:		Implementation file for *
*					Player class   			*
*********************************************/

#include "Player.h"

Player::Player()
: _name("No Name"), _marker(' ')
{

}

Player::Player(string name, char marker)
: _name(name), _marker(marker)
{

}

string Player::getName()
{
	return _name;
}

char Player::getMarker()
{
	return _marker;
}

void Player::setName(string name)
{
	_name = name;
}

void Player::setMarker(char marker)
{
	_marker = marker;
}