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
	//to avoid calls by mistake
	Game(const Game &game){};
	Game operator=(const Game& game){};

public:
	void start();
	Game() :turn(0), direction(1), game(false), num_of_players(-1) {};
	~Game();
};
#endif




