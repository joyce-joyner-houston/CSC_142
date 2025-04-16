#include <iostream>
#include <ctime>
#include <cstdlib>


int DiceRoll(int numberofsides){
    return(rand() % numberofsides) + 1;
};


int main(){
    srand(time(0));
    int Hp = 20;
    int const HAC = 15;
    int Ghp = 10;
    int const GAC = 12;


    int playerdamage;
    int goblindamage;


    std::cout << "Combat begins between Hero and Goblin!"

    while (hero_Hp > 0 and goblin_Ghp >0) {
         std::cout << "--Hero's turn--\n ";
         int hero_roll = rollDice(20);
         std::cout << "Hero rolls a " << hero_roll;

         if (hero_roll >= goblin_GAC) {
            int playerdamage = rollDice(8);
            goblin_Ghp -= playerdamage;

            std::cout << "and hits the Goblin!\n";
            std::cout << "Hero deals " << playerdamage << "damage.";
            std::cout << "Goblin has " << (goblin_Ghp > 0 ? goblin_Ghp : 0) << "HP remaining.\n";
         }

         else {
            std::cout << " and misses!\n";
         }

         if (goblin_Ghp <= 0) break;

         std::cout "-- Goblin's turn --\n";
         int goblin_roll = rollDice (20);
         std::cout << "Goblin rolls a " << goblin_roll;

         if (goblin_roll >= hero_HAC){
            int goblindamage = rollDice(6);
            hero_Hp -= goblindamage;
            std::cout << "and hits the Hero!\n";
            std::cout << "Goblin deals " << goblindamage << "damage.";
            std::cout << "Hero has " << (hero_Hp > 0 ? hero_Hp : 0) << "HP remaining.\n";
         }

         else {
            std::cout << "and misses!\n";
         }
        }

        if (hero_Hp > 0){
            std::cout << "Goblin is defeated! Hero Wins!\n";
        }

        else {
            std::cout << "Hero was defeated! Goblin Wins!\n";
        }

        return 0;
}