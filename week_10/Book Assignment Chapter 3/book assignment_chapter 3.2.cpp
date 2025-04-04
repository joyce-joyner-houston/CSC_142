#include <iostream>
#include <cstdio>

void write_to(char *ptr, std::size_t len, const int index char input){
    if(index < 0 || index > len -1)
        std::cout << "Invalid index " << index << '\n';

    else
        pte[index] = input;
}

void read_from(const cahr *ptr, std::size_t len, const int index) {
    if (index < 0 || index > len -1)
        std::cout "Invalid index " << index << '\n';

    else 
        std::cout << "ptr[" << index << "] = " << ptr[index] << '\n';
}


int main() {
    char lower[] = "abc?e";
    auto lower_len = std::size(lower);


    char upper[] = "ABC?E";
    auto upper_len = std::size(upper);


    write_to(lower, lower_len, 3, 'd');
    read_from(lower, lower_len, 3);


    write_to(upper, upper_len, 3, 'D');
    read_from(upper, upper_len, 3);


    std::cout << "lower: " << lower << '\n';
    std::cout << "upper: " << upper << '\n';

}