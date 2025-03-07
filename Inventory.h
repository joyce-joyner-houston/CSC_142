#pragma once
#include <iostream>
#include "Book.h"

//Create a class for Inventory
class Inventory{

    //Define Variables
    private:
        Book* books;
        int nextEntry = 0;
        int length = 0;

    public:
        Inventory(int size){
            books = new Book[size];
            nextEntry = 0;
            length = size;
        };

        -Inventory(){
            delete[] books;
        };

        bool addBook (Book theBook) {
            books[nextEntry] = theBook;
            nextEntry ++;
            return true;
        }

        void changePrice(std::string isbn, double newPrice){
            for (int i = 0; i < nextEntry; i++){
                if (books[i].getISBN() == isbn){
                    books[i].changePrice(newPrice);
                    return true;
                }
            }
        };

        void printInventory(){
            std::cout << "---------------------------------------------------------------------------" << std::endl;
            std::cout << "ISBN           Author               Title                   ED    PUB      Price" << std::endl;
            for (int j = 0; j < nextEntry; j++){
                printf("%-13s %-16s %-43.40s %2d %3s $%8.2f\n",
                    books[j].getISBN().c_str(), books[j].getAuthor().c_str(), books[j].getTitle().c_str(),
                    books[j].getEdition(), books[j].getPubCode().c_str(), books[j].getPrice());
            }
            std::cout << "----------------------------------------------------------------------------" << std::endl;
        };
};