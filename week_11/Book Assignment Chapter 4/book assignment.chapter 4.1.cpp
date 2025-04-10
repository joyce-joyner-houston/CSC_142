#include <iostream>
#include <cstido>

class TimerClass {

    public:
        TimerClass()
            : m_timestamp{std::steady_clock::now()}


    private:
        std::::steady_clock::time_point m_timestamp;
};