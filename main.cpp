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
        cout << "hash of file1.txt: " << hashFun(read("inputFiles/file1.txt")) << "\n";
        cout << "hash of file2.txt: " << hashFun(read("inputFIles/file2.txt")) << "\n";
    }
    else if(input == "2"){
        generateTextFile("inputFiles/generatedFile1.txt");
        generateTextFile("inputFiles/generatedFile2.txt");
        cout << "files generated. \n";
        cout << "hash of generatedFile1.txt: " << hashFun(read("inputFiles/generatedFile1.txt")) << "\n";
        cout << "hash of generatedFile2.txt: " << hashFun(read("inputFiles/generatedFile2.txt")) << "\n";
    }
    else if(input == "3"){
        cout << "hash of loremA.txt: " << hashFun(read("inputFiles/loremA.txt")) << "\n";
        cout << "hash of loremB.txt: " << hashFun(read("inputFiles/loremB.txt")) << "\n";
    }
    else if(input == "4"){
        cout << "hash of empty.txt: " << hashFun(read("inputFiles/empty.txt")) << "\n";
    }
    else{
        cout << "enter valid value \n0 - for manual input \n1 - for comparison of 2 files w/ 1 different character \n2 - for 2 files with > 1000 randomly generated characters\n";
        cout << "3 - for 2 identical different by 1 character \n";
        cin >> input;
        indexInput(input);
    }
}

int main(){
    string input;
    cout << "0 - for manual input \n1 - for comparison of 2 files w/ 1 different character \n2 - for 2 files with > 1000 randomly generated characters\n";
    cout << "3 - for 2 identical files different by 1 character \n";
    cout << "4 - for empty file \n";
    cin >> input;

    indexInput(input);
}