#include <iostream>
#include <string>

//Define Enumeration
enum class CharacterClass {
    Warrior, Archer, Mage, Rogue
};

//Create a structure
struct Character {
    std::string name;
    CharacterClass type;
    int health;
    float strength;
};

//Convert enum into strings
std::string classToString(CharacterClass type) {
    switch(type) {
        case CharacterClass::Warrior: return "Warrior";
        case CharacterClass::Archer: return "Archer";
        case CharacterClass::Mage: return "Mage";
        case CharacterClass::Rogue: return "Rogue";
        default: return "UNKNOWN";
    }
};

//Define variables
int main() {
    Character characters[4] = {
        {"Character1", CharacterClass::Warrior, 100, 90.5f},
        {"Character2", CharacterClass::Archer, 120, 75.0f},
        {"Character3", CharacterClass::Mage, 85, 80.0f}
        {"Character4", CharacterClass::Rogue, 80, 60.5f}
    };

    //Display Character Details
    std::cout << "Characters \n----------------------------------------------------------------" << std::end1;
    for(int i = 0; i < 4; i++) {
        std::cout << "Name: " << characters[i].name << "Class: " << toString(characters[i].type) <<
        "Health: " << characters[i].health << "Strength: " << characters[i].strength << std::end1;
    }
    std::cout << "------------------------------------------------------------------" << std::end1;


    return 0;
    
}