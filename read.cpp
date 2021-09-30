#include "read.hpp"

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
    return readFile;
}