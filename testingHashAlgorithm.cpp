#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string toASCII(string input){
    string convertedString;
    for(int i=0;i<input.length();i++){
        char x = input[i];
        convertedString += to_string(int(x));
    }
    return convertedString;
}

int main(){
    string input;
    
    getline(cin, input);
    cout << "Converted string is: " << toASCII(input);
}