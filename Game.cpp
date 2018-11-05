#include "Game.h"

void Game::start(){
    size_t num_of_cards = 0;
    cout << "How many players?" << endl;
    while (this->num_of_players <= 0 && !game) {
        if(this->num_of_players == 0){
            game = true;
            break;
        }
        cin >> this->num_of_players;
        if(this->num_of_players < 0)
		    cout << "Please enter a positive number, or 0 to quit" << endl;
	}
    while(num_of_cards <= 0 && !game){
        if(num_of_cards  == 0){
            game = true;
            break;
        }
        cout << "How many cards?" << endl;
		cin >> num_of_cards;
        if(num_of_cards < 0)
		    cout << "Please enter a positive number, or 0 to quit" << endl;
    }
    if(!game){
        for(size_t i = 1; i < this->num_of_players+1; ++i)
        {
            string name;
            std::cout << "player number" <<i+1<< "name?\n";
            std::cin >> name;
            this->players.push_back(Player(name, num_of_cards));
        }
        
    }
}