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