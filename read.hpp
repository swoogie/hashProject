#ifndef READ_HPP
#define READ_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using std::stringstream;
using std::ifstream;
using std::string;
using std::cout;
using std::cin;

stringstream returnBuff(string fileName);
string read(string fileName);

#endif