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


        TimerClass(const TimerClass &rhs) noexcept
            :m_timestamp{rhs.m_timestamp}

        
        TimerClass& operator=(const TimerClass &rhs) noexcept {
            if (thie == &rhs) return *this;

            m_timestamp = rhs.m_timestamp;

            return *this;
        }


    private:
        std::steady_clock::time_point m_timestamp;
};