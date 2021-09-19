#include <iostream>
#include <string>

std::string hashFun(std::string str){

    static const int primeInt = 7103;
    unsigned int hash = primeInt;
    for(int i=0; i<str.length(); ++i){
        hash = (hash*31) + int(str[i]);
    }

    std::string hashStr = std::to_string(hash);
    int hashStrSize = hashStr.size();

    static const std::string hex = "0123456789abcdef";
    int hexSize = hex.size();    

    unsigned int index = hash;
    std::string hexHash;

    for(int i=0; i<64; i++){
        index += int(hashStr[index % hashStrSize]);
        hexHash += hex[index % hexSize];
    }
    return hexHash;

}

int main(){
    std::string input;
    
    std::cout << "input: \n";
    std::getline(std::cin, input);
    std::cout << hashFun(input);
}