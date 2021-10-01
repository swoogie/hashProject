#include "rng.hpp"
#include "rnd.hpp"

void fillFile(std::ofstream &pr){
    for(int i=0; i<1001; i++){
        char charizard = rand();
        pr << char(getRandomInteger(33, 126));
    }
}

void generateTextFile(string newFileName){  
    std::ofstream pr(newFileName);
    fillFile(pr);
}

void getRandomStream(int stringSize, stringstream &stream){
        
        for(int i=0 ; i<stringSize; i++){
            stream << char(getRandomInteger(33, 126));
        }
} 

void generateStrings(){
    std::vector<int> pairElementSize = {5,50,250,500};
    stringstream allPairs;
    int identical = 0;

    for(int i=0; i<pairElementSize.size(); i++){
        for(int j=0; j<25000;j++){
            stringstream pairEl1;
            getRandomStream(pairElementSize[i], pairEl1);
            string pair1 = pairEl1.str();
            string hash1 = hashFun(pair1);

            stringstream pairEl2;
            getRandomStream(pairElementSize[i], pairEl2);
            string pair2 = pairEl2.str();
            string hash2 = hashFun(pair2);
            if (hash1 == hash2){
                allPairs << pair1 << " " << pair2 << "\n" << hash1 << " " << hash2 <<"      //MATCH//\n";
                identical++;
            }
            else{
                allPairs << pair1 << " " << pair2 << "\n" << hash1 << " " << hash2 <<"\n";
            }
        }
    }
    cout << "number of identical hashes: " << identical << "\n";
    std::ofstream pr("pairHashes.txt");
    pr << allPairs.str();
}

double generateStrings2(){
    double similarity = 0;
    for(int j=0;j<100000;j++){
        stringstream pairEl1;
        getRandomStream(1000, pairEl1);
        string pair1 = pairEl1.str();
        string pair2 = pair1;

        while(pair1 == pair2){
            char character = getRandomInteger(33,126);
            pair2[getRandomInteger(0,1000)] = character;
        }

        string hash1 = hashFun(pair1);
        string hash2 = hashFun(pair2);
        
        double identical = 0;
        for(int i=0;i<hash1.size(); i++){
            if(hash1[i] == hash2[i]){
                identical++;
            } 
        }
        similarity += (identical*100/64);
    }
    
    return similarity/100000;
}