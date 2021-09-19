#include <iostream>
#include <string>

std::string hashFun(std::string str){

    int primeInt = 7103;
    unsigned int hash = primeInt;
    for(int i=0; i<str.length(); ++i){
        hash = (hash*31) + int(str[i]); // (hash << 5) - hash + int(str[i])
    }

    std::string hashStr = std::to_string(hash);
    int hashStrSize = hashStr.size();

    std::string hex = "0123456789abcdef";
    int hexSize = hex.size();    

}

int main(){
    std::string input;
    
    std::cout << "input: \n";
    std::getline(std::cin, input);
    std::cout << hashFun(input);
}