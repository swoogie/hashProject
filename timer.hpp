#ifndef TIMER_HPP
#define TIMER_HPP

#include <iostream>
#include <chrono>

using namespace std::chrono;

class timer {
    using clock = std::chrono::high_resolution_clock;
    using dsec = std::chrono::duration<double>;
    using tps = time_point<clock, dsec>;
    
    public:
        timer() {
            this->start();
        }

        const double duration();
        void start();

    private:
        tps dur;
};

const double timer::duration() {
  return dsec(clock::now() - dur).count();
}

void timer::start() {
  dur = clock::now();
}
#endif


