#pragma once
#include <string>
using namespace std;

class Player
{
public:
	Player(string name, char marker);
	string getName();
	char getMarker();
private:
	string _name;
	char _marker;
};

