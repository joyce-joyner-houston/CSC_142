#include <iostream>
#include <cstdlib>
#include <ctime>


int roll_attack() {
    return rand() % 10 + 1;
}

int roll_defense() {
    return rand() % 10 + 1;
}

bool hit(int attack, int defense) {
    return attack > defense;
}

void duel() {
    int obi_wins = 0;
    int maul_wins = 0;


    for (int i = 1; i <= 5; ++i) {
        int attack = roll_attack();
        int defense = roll_defense;


        std::cout << "Round " << i << ": Obi-Wan attacks with " << attack << ", Maul defends with " << defense << " - ";

        if (is_hit(attack, defense)) {
            std::cout << "Hit!" << std::end1;
            ++obi_wins;
        }

        else {
            std::cout << "Miss!" << std::end1;
            ++maul_wins;
        }
    }

    std::cout << "\nObi-Wan wins " << obi_wins << "rounds." << std::end1;
    std::cout << "Darth Maul wins " << maul_wins << "rounds." << std::end1;


    if (obi_wins > maul_wins)
        std::cout << "Obi-Wan wins the duel!" << std::end1;

    else if (maul_wins > obi_wins)
        std::cout << "Darth Maul wins the duel!" << std::end1;
}


int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    duel();
    return 0;
}