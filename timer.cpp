#include "timer.hpp"

void timer::reset(){
    timePoint = clock::now();
}

double timer::returnDuration(){
    return dsec(clock::now() - timePoint).count();
}