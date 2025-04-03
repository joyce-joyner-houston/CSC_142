#pragma once
#include <string>

//Create a class for book
class Book{

    //Define Variables
    private:
        std::string codeNum;
        std::string author;
        std::string title;
        std::string pubCode;
        int edition;
        double price;

    //Define Values
    public:
        Book(std::string cn, std::string au, std::string ti, std::string pc, int ed, double pr){
            codeNum = cn;
            author = au;
            title = ti;
            pubCode = pc;
            edition = ed;
            price = pr;
        };

        //Define Methods
        std::string getTitle(){return title;};
        std::string getAuthor(){return author;};
        std::string getISBN(){return codeNum;};
        std::string getPubCode(){return pubCode;};
        int getEdition(){return edition;};
        double getPrice(){return price;};

        //Allow price change
        void changePrice(double newPrice){price = newPrice;};
};