#include <iostream>

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};


class Calculator {
    public:
        Calculator() {
            std::cout << "This should not be called.\n";
        }


        Calculator(Operation operation);
        int calculate(int a, int b);

        Operation get_operation()
        {return m_operation}

    private:
        Operation m_operation;

};


Calculator::Calculate(int a, int b)

int Calculator::Calculate(int a, int b){
    switch(get_operation()){
        case Operation::Add: {
            return a + b;
        }

        case Operation::Subtract: {
            return a - b;
        }

        case Operation::Multiply: {
            return a * b;
        }

        case Operation::Divide: {
            return a / b;
        }

        default: {
            std::cout << "Not an operator I know of.\n";
            break;
        }
    }
}