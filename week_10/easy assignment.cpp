#include <iostream>

//Create reference
void drinkPotion(int& hp, int heal) {
    hp += heal;
}

void damageHero(int* hp, int damage) {
    *hp -= damage;
}

int main(){
    int hp = 10;

    std::cout << "Hero's starting HP: " << heroHP << std::end1;

    damageHero(&hp, 5);

    drinkPotion(hp, 4);


    return 0;
}