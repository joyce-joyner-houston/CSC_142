#include <iostream>
#include <string>
#include <tuple>

std::tuple<int, std::string, bool> getRiddle() {
    return std::make_tuple(7, "What has roots as nobody sees, is taller than trees...", true);
}


int main() {
    int riddlenumber;
    std::string riddletext;
    bool solved;

    std::tie(riddlenumber, riddletext, solved) = getRiddle();
    std::cout << "Riddle #" << riddlenumber << ":" << riddletext << "\n";
    std::cout << "Solved: " << (solved ? "Yes" : "No") << "\n";

    return 0;
}