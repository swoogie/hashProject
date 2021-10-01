#include "rnd.hpp"

unsigned int seed = (std::chrono::high_resolution_clock::now().time_since_epoch().count());
std::mt19937 mt(seed);

int getRandomInteger(int min, int max){
    std::uniform_int_distribution<int> uid(min, max);

    return uid(mt);
}