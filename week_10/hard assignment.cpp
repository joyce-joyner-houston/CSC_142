#include <iostream>
#include <string>

class MagicItem {
    public:
        MagicItem(const std::string& itemName, const std::string& magicPower, int charges)
        :itemName_{itemName}, magicPower_{magicPower}, charges_{charges} {
            std::cout << itemName << "created with" << charges << "charges" << std::end1;
        }

    void useItem() {
        if(charges > 0) {
            charges -=1;
            std::cout << item << "(" << magic << ") used. " << charges << "charges left." << std::end1;
        }

        else{
            std::cout << "No more charges" << item << "(" << magic << ")" << std::end1;
        }
    }

    private:
    std::string item;
    std::string magic;
    int charges;
};

int main() {
    MagicItem item1("Magic Wand", "Causes enemies to catch on fire and take damage", 5)
    item1.useItem();
    item1.useItem();
    item1.useItem();

    MagicItem item2("Ring of Power", "Destroys enemies with just a snap", 20)
    item2.useItem();
    item2.useItem();
    item2.useItem();

    MagicItem item3("Purple Orbs", "These orbs will protect you from enemies and deliver small attack damage to them", 2)
    item3.useItem();
    item3.useItem();

    return 0;
}