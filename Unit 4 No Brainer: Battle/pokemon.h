//
//  pokemon.h
//  Unit 4 No Brainer: Battle
//
//  Created by Coleton Watt on 9/16/21.
//

#ifndef pokemon_h
#define pokemon_h
#include <iostream>
#include <ostream>
#include <iomanip>

using namespace std;

class pokemon{
public:
    pokemon();
    pokemon(string);
    void battle(pokemon);
    void setStrength();
    int getStrength();
    string getName();
    int getHP();
    void takeDamage(int);
    friend ostream operator <<(ostream &, pokemon);


private:
    string name;
    int hp;
    int strength;
    

};


#endif /* pokemon_h */
