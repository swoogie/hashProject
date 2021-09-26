#include "rng.hpp"

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

void fillFile(std::ofstream &pr){
    for(int i=0; i<1001; i++){
        char charizard = rand();
        pr << charizard;
    }
}

void generateTextFile(string newFileName){   
    randChar rand(33, 126);
    std::ofstream pr(newFileName);
    fillFile(pr);
}
