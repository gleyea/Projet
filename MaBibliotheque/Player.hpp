#pragma once
#include <string>
#include "Fighter.hpp"

class Player : public Fighter {

public:
	Player(int i);
	void win_inc();

private:
	int win;
};