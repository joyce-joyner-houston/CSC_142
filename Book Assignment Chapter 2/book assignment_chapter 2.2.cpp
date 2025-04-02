#include <iostream>

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};


class Calculator {
    public:
        Calculator(Operation operation);

    private:
        Operation m_operation;
};