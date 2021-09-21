//
//  Pokemon.hpp
//  Unit 4 No Brainer: Battle
//
//  Created by Coleton Watt on 9/16/21.
//

#ifndef Pokemon_hpp
#define Pokemon_hpp

#include <stdio.h>
#include <iostream>
#include <ostream>
#include <iomanip>

using namespace std;

class Pokemon{
public:
    Pokemon();
    Pokemon(string);
    void battle(Pokemon &);
    void setStrength();
    int getStrength();
    string getName();
    int getHP();
    void takeDamage(int);
    friend ostream& operator <<(ostream &, Pokemon);


private:
    string name;
    int hp;
    int strength;
    

};

#endif /* Pokemon_hpp */
