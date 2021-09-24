#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "read.hpp"
#include "hashing.hpp"
#include "rng.hpp"

using std::stringstream;
using std::ifstream;
using std::string;
using std::cout;
using std::cin;

void indexInput(string input){
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
    else if(input == "2"){
        generateTextFile("generatedFile1.txt");
        generateTextFile("generatedFile2.txt");
        cout << "files generated. \n";
        cout << "hash of generatedFile1.txt: " << hashFun(read("generatedFile1.txt")) << "\n";
        cout << "hash of generatedFile2.txt: " << hashFun(read("generatedFile2.txt")) << "\n";
    }
    else{
        cout << "enter valid value \n0 - for manual input \n1 - for comparison of 2 files different by 1 character \n2 - for 2 files with > 1000 randomly generated characters";
        cin >> input;
        indexInput(input);
    }
}


int main(){
    string input;
    cout << "0 - for manual input \n1 - for comparison of 2 files different by 1 character \n2 - for 2 files with > 1000 randomly generated characters";
    cin >> input;

    indexInput(input);
}