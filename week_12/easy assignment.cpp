#include <iostream>

int main() {
    int gold = 100;
    int potions;
    int potion_cost = 10;

    std::cout << "Welcome to the potion shop!\n";
    std::cout << "Healing potions cost " << potion_cost << "gold pieces\n";
    std::cout << "How many potions would you like to buy? ";
    std::cin >> potions;


    int total_cost = potions * potions_cost;

    while ((potions*10) <= gold){
        if (potions == 0){
            std::cout << "That's it for today? Alright, have a nice day!\n" << std::end1;
            break;
        }
        
        else {
            gold -= (potions*10);
            std::cout << "Awesome! Here's your " << potions << "potions. Would you like to buy more potions? (Current Gold: " << gold << "): ";
            std::cin >> potions;
        }
    }

    return 0;
}