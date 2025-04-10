#include <iostream>

   class Goblin{
    public:
        Goblin(){std::cout << "A Goblin was summoned!" << std::end1;};

        Goblin(){std::cout << "The Goblin has vanished!" << std::end1;};
   };

   int main() {
    Goblin goblin;

    return 0;
}