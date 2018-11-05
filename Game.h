#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "Card.h"
class Game {
private:
	int turn;
	int direction;
	int num_of_players;
	bool game;
	Card current;
	vector<Player> players;
	void gameOver();
	Game() :turn(0), direction(1), game(false), num_of_players(-1) {};

public:
	void start();
};
#endif




