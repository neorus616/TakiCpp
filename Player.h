#ifndef PLAYER_H
#define PLAYER_H
#include "Card.h"
#include <vector> 
using namespace std;

class Player {
private:
	string name; //Name of the player
	int num_of_cards; //Amount of cards
	vector<Card> cards; //vector of cards

public:
	Player(string name, int num_of_cards);
	Player();
	Player(const Player&);
	string getName(); 
	bool is_winner();
	bool play(Card&);
	~Player();
};
#endif