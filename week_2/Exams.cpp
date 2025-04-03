/*
    0. Rename this file to Exams.cpp

    1. In this file, and every file created for this class, add comments at the top of the file that include:
        - The name of the file
        - A brief description of the program (or class) that’s in the file
        - Your name
        - Today’s date
    
    2. In this file, create a single function called main() that performs the following steps 
    (if you are unsure how to do any of these things, consult with last weeks lab to find suggestions):

        - Prompt the user to input a String that is their name.

        - Prompt the user to input three integers, representing exam scores. Each
        integer should be stored in a separate variable of type int.

        - Calculate the average of the three exam scores and store the result in a
        variable of type double. Note: be careful about integer division! For full
        credit the average you calculate must be numerically correct.

        - Display the input data (the user’s name and three exam scores). Also
        display the calculated result (the exam average), formatted to two digits
        to the right of the decimal point.

        - For full credit, your program must print all the input data as well as the
        results, in a clearly understandable manner, with appropriate descriptive
        labels and formatting.

    4. A successful run should have output that looks something like the output that is provided in the Lab3 folder:

*/


/*

Exams.cpp
This programs provides your exam average by calculating all the exams you took
Joyce Joyner-Houston
1/29/25

*/

#include <iostream>
#include <iomanip>

//Define variables
int main(){
    std::string name;
    int number1;
    int number2;
    int number3;
    double average_score;

//Information from User
std::cout<<"Enter name: ";
std::getline (std::cin, name);

    std::cout<<"What was your first score on the exam? ";
    std::cin>>number1;
    std::cout<<"What was your second score on the exam? ";
    std::cin>>number2;
    std::cout<<"What was your last score on the exam? ";
    std::count>>number3;

//Calculate score average
average_score = (number1 + number2 + number3) / 3.0;

//Print information with average score
std::cout<<"Hello " + name << std::end;
std::cout<<"Your exams scores " <<number1<< ", " <<number2<< " and " <<number3<< ". <<std::endl";
std::cout<<"Your average exam score is " <<std::fixed<<std::setprecision(2) <<avergae_score<< std::endl;
}