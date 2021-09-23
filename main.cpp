#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using std::stringstream;
using std::ifstream;
using std::string;
using std::cout;
using std::cin;


stringstream returnBuff(string fileName){
    ifstream rd(fileName);
    try {
        if(!rd){
            throw ("Invalid file name");
        }
    }
    catch (string invalidName){
        cout << invalidName;
    } 

    stringstream buff;
    buff << rd.rdbuf();

    return buff;
}

string read(string fileName){
    stringstream buff = returnBuff(fileName);
    string readFile = buff.str();
    // stringstream().swap(buff); buff.str(""); buff.clear();
    cout << readFile << std::endl;
    return readFile;
}

string hashFun(string str){

    static const int primeInt = 7103;
    unsigned int hash = primeInt;
    for(int i=0; i<str.length(); ++i){
        hash = (hash*31) + int(str[i]);
    }

    string hashStr = std::to_string(hash);
    int hashStrSize = hashStr.size();

    unsigned int index = hash;
    static const string hex = "0123456789abcdef";
    string hexHash;

    for(int i=0; i<64; i++){
        index += int(hashStr[i % hashStrSize]) + i*primeInt*31;
        hexHash += hex[index % 16];
    }
    return hexHash;

}

string indexInput(string input){
    if(input == "0"){
        cout << "input: \n";
        cin.clear();
        cin.ignore();
        getline(cin, input);
        cout << hashFun(input);
    }
    else if(input == "1"){
        cout << "hash of file1.txt: " << hashFun(read("file1.txt")) << "\n";
        cout << "hash of file2.txt: " << hashFun(read("file2.txt")) << "\n";
    }
    else{
        cout << "enter valid value \n0 - for manual input \n1 - for comparison of 2 files different by 1 character\n";
        cin >> input;
        indexInput(input);
    }
    return " ";
}


int main(){
    string input;
    cout << "0 - for manual input \n1 - for comparison of 2 files different by 1 character\n";
    cin >> input;

    indexInput(input);
}