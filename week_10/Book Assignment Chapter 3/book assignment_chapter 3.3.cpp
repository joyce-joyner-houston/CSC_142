#include <iostream>

struct Element {
    Element* next{};
    Element* previous{};
    void insert_after(Element* new_element) {
        new_element->next = next;
        next = new_element;
    }


    void insert_before(Element* new_element) {
        new_element->previous = previous;
        previous = new_element;
    }
    char prefix[2];
    short operating_number;
};