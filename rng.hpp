#ifndef RNG_HPP
#define RNG_HPP

#include <iostream>
#include <random>
#include <chrono>
#include <fstream>

using std::string;

class randChar{
    public:
        randChar(int low, int high) :  gen(seed), range(low, high) {}
        int operator()(){
            return range(gen);
        }
    private:
        // random_device rd is brokey
        const unsigned int seed = (std::chrono::system_clock::now().time_since_epoch().count()); 
        std::mt19937 gen;
        std::uniform_int_distribution<> range;
};

void generateTextFile(string newFileName);

#endif