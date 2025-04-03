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

int main() {
    Calculator calc1 = {Operation::Add};
    std::cout << "Add: " << calc1.calculate(4,7) << '\n';

    Calculator calc2 = {Operation::Subtract};
    std::cout << "Subtract: " << calc2.calculate(10,2) << '\n';

    Calculator calc3 = {Operation::Multiply};
    std::cout << "Multiply: " << calc3.calculate(8,5) << '\n';

    Calculator calc4();


    return 0;
}