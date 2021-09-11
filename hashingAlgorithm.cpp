#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ios>

using namespace std;

string toASCII(string input){
    string convertedString;
    for(int i=0;i<input.length();i++){
        char x = input[i];
        convertedString += to_string(int(x));
    }
    return convertedString;
}

string toHex(string input){
    stringstream ss;
    ss << hex << input;
    input = ss.str();
    ss.str("");
    return input;
}

string toDec(string input){
    stringstream ss;
    ss << dec << input;
    input = ss.str();
    ss.str("");
    return input;
}

string hashFun(string input){

    
    int stringlength = input.length();
    input = toHex(input);
    cout << input;
    

    while(stringlength < 64){
        input = toDec(input);
        if(stringlength < 6){
            int dec =  stoi(input);
            dec += 70798;
            input = to_string(dec);
        }
        input.insert(stringlength/2,input.substr(stringlength/1.5,stringlength/2.7));
        input.insert(stringlength/3,input.substr(stringlength/1.2,stringlength/1.7));
        input = toHex(input);
    }

    while(stringlength > 64){
        input.erase(input.end()-1);
    }

    return input;
}

int main(){
    string input;
    
    cout << "input: " << endl;
    getline(cin, input);
    input = toASCII(input);
    cout << input << endl;
    cout << hashFun(input);
}