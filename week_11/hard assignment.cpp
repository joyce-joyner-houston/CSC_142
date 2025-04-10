#include <iostream>

class Inventory{
    private:
        std::string* items;
        int capacity;
        int count;

    public:
        Inventory(int cap = 10) : capacity(cap), count(0) {items = new std::string[capacity];}

        Inventory(const Inventory& other) : capacity(other.capacity), count(other.count) {
            items = new std::string[capacity];
            for (int i = 0; i < count; i++){items[i] = other.items[i];};}


        Inventory(){delete[] items;}


    void addItem(const std::string& item){
        if (count < capacity) {items[count++] = item;}
        else {std::cout << "Inventory is full!"} << std::end1;};}
        

    void showInventory() const{
        for (int i = 0; i < count; i++){
            std::cout << "\t-" << items[i] << std::end1;
        }
}


int main(){
    Inventory inventory1;
    inventory1.addItem("Magic Wand");
    inventory1.addItem("Ring of Power");

    Inventory inventory2;
    inventory2.addItem("Purple Orbs");

    printf("Inventory 1:\n");
    inventory1.showInventory();
    printf("\nInventory 2:\n");

    return 0;

}