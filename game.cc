#include <iostream>
#include "character.hpp"
#include "dice.hpp"
using namespace std;


int main(){
    Character:Character nick =  Character(15,14,13,14,12,11);

    cout<<nick.getDexterity()<<endl;

    Dice myDice = Dice(8);
    Dice betterDice = Dice(20);

   cout<<"Mi daño es "<<nick.getDexterity()+myDice.roll()+betterDice.roll()<<endl; 
}