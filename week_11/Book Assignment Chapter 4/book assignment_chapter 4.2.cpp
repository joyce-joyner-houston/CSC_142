#include <iostream>
#include <cstido>

class TimerClass {

    public:
        TimerClass()
            : m_timestamp{std::steady_clock::now()}

        :TimerClass(){
            auto current = std::steady_clock::now( - m_timestamp;)
            std::cout << std::duration_cast<std::mircoseconds>(current).count();
            std::cout << "mircoseconds\n";
        }


    private:
        std::steady_clock::time_point m_timestamp;
};