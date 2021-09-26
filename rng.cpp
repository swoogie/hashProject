#include "rng.hpp"

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
