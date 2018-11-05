#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "Card.h"
class Game {
private:
	//private members and functions
	int turn;
	int direction;
	size_t num_of_players;
	bool game;
	Card current;
	vector<Player> players;
public:
	//public members and functions
	Game() :turn(0), direction(1), game(false),num_of_players(-1) {};
	void start();
};
#endif




