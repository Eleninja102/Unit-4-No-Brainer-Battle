//
//  main.cpp
//  Unit 4 No Brainer: Battle
//
//  Created by Coleton Watt on 9/16/21.
//

#include <iostream>
#include "Pokemon.hpp"
#include <time.h>


using namespace std;

int main() {
    srand ((unsigned int)time(NULL));
    cout << "Pokemon Battle\n";
    string name;
    cout << "Enter your Pokemon name: ";
    cin >> name;
    
    Pokemon you(name);
    Pokemon computer;
    
    string choice;
    
    do{
        cout << you << endl;
        cout << computer << endl;
        cout << "(B)attle or (Q)uit: ";
        cin >> choice;
        you.battle(computer);
        
    }while(choice != "Q" && choice != "q" && you.getHP() > 0 && computer.getHP() > 0);
    
    if(you.getHP() > computer.getHP()){
        cout << "You Win"<<endl;
        
    }else{
        cout << "You Lose"<<endl;
    }
    
    
    return 0;
}
