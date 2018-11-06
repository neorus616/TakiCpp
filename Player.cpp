/**
    Advanced programming and C++ language.
    Player.cpp

    @author Constantine Kazakov
    @version 5.11.18
*/
#include "Player.h"

/**
* Player constructor.
* 
* @param name: Player name, num_of_cards: total number of cards the player start with
* @return Player object
*/
Player::Player(string name, int num_of_cards):name(name),num_of_cards(num_of_cards){
		for (size_t i = 0; i < num_of_cards; i++)
			this->cards.push_back(generate_card());
	}

/**
* Player copy constructor.
* 
* @param player: other player
* @return Player object
*/
Player::Player(const Player& other){
        this->name = other.name;
		this->num_of_cards = other.num_of_cards;
        for (size_t i = 0; i < num_of_cards; i++)
            this->cards.push_back(other.cards.at(i));
	}

/**
* Player empty constructor.
* 
* @return Player object
*/
Player::Player():name("empty"),num_of_cards(0){}

/**
* This function will perform the players turn.
* 
* @return true if played, false if took a card.
*/
bool Player::play(Card& card){
    cout << "current: " << card << endl;
	cout << this->name + ", your turn -" << endl;
    cout << "Your cards: ";
    for(size_t i = 0; i < num_of_cards; i++)
    {
		cout << "(" + to_string((long long)(i + 1)) + ")" << this->cards.at(i) << " ";
    }
    cout << endl;
    size_t choice;
    while(true){
        cin >> choice;
        if(choice <= num_of_cards && choice > 0){
            Card chosenCard = this->cards.at(choice-1);
            if(card.is_leggal(chosenCard)){
                card = chosenCard;
                this->cards.erase(cards.begin() + choice - 1);
                this->num_of_cards--;
                return true;
            } else {
                cout << "You can't put " << chosenCard << " on " << card << endl;
            }
        } else {
            this->cards.push_back(generate_card());
            this->num_of_cards++;
            return false;
            }
    }
}

/**
* Checks if current player is a winner but checking the amount of cards he has.
*
* @return bool true if player reached zero cards, false otherwise.
*/
bool Player::is_winner(){
  if(num_of_cards==0)
    return true;
  return false;
}

/**
* Returns current player name.
*
* @return string name.
*/
string Player::getName(){
    return name;
}