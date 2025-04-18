#include <iostream>

int main() {
    std::cout << "Coutndown!\n";
    for (int i = 10; i >= 1; --i){
        std::cout << i << "...\n";
    }
    std::cout << "Liftoff!\n";
    return 0;
}