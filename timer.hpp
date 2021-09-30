#ifndef TIMER_HPP
#define TIMER_HPP

#include <chrono>

using namespace std::chrono;

class timer{
    using clock = high_resolution_clock;
    using dsec = duration<double>;
    using tps = time_point<clock>;

    public:
        timer(){
            reset();
        }

        void reset();
        double returnDuration();

    private:
    tps timePoint;
};

#endif