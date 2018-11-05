/**
    Advanced programming and C ++ language.
    Player.cpp

    @author Constantin Kazakov
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
		for (size_t i = 0; i < cards.size(); i++)
			cards[i]=generate_card();
	}

bool Player::play(Card&){

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