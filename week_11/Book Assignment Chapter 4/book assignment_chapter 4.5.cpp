#include <iostream>
#include <cstido>

class TimerClass {

    public:
        TimerClass()
            : m_timestamp{std::steady_clock::now()}
            m_name{name}{}

        :TimerClass(){
            auto current = std::steady_clock::now( - m_timestamp;)
            std::cout << m_name << std::duration_cast<std::mircoseconds>(current).count();
            std::cout << "mircoseconds\n";
        }


        TimerClass(const TimerClass &rhs) noexcept
            :m_timestamp{rhs.m_timestamp}
            m_name{rhs.m_name}

        
        TimerClass& operator=(const TimerClass &rhs) noexcept {
            if (thie == &rhs) return *this;

            m_timestamp = rhs.m_timestamp;
            m_name = rhs.m_name;

            return *this;
        }


    private:
        std::steady_clock::time_point m_timestamp;
        const char *m_name{};
};