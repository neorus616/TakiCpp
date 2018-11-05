/**
    Advanced programming and C ++ language.
    Game.cpp

    @author Constantin Kazakov
    @version 5.11.18
*/
#include "Game.h"

/**
* This function will initialize the game and play it.
*/
void Game::start(){
    int num_of_cards = 0;
    cout << "How many players?" << endl;
    cin >> this->num_of_players;
    if (this->num_of_players <= 0)
        throw "illegal number! please enter a positive number";
    cout << "How many cards?" << endl;
	cin >> num_of_cards;
    if(num_of_cards <= 0)
        throw "illegal number! please enter a positive number";
    for(size_t i = 1; i < this->num_of_players+1; ++i)
    {
        string name;
        std::cout << "player number " << i << " name?\n";
        std::cin >> name;
        this->players.push_back(Player(name, num_of_cards));
    }
    this->current = generate_card();
    while(true){
        if(this->players.at(turn).play(this->current)){
            if(players.at(turn).is_winner()){
                cout << players.at(turn).getName() << " wins!";
                break;
            }
            switch(current.get_sign()){
                case PLUS:
                    break;
                case CD:
                    direction = -direction;
                    turn = (num_of_players + turn + direction) % num_of_players;
                    cout << turn;
                    break;
                case STOP:
                    turn = (num_of_players + turn + 2*direction) % num_of_players;
                    break;
                default:
                    turn = (num_of_players + turn + direction) % num_of_players;
                    break;
            }
        } else turn = (num_of_players + turn + direction) % num_of_players;
    }
}