#include <iostream>
#include <string>
using namespace std;

void printString(const std::string& str) { // Note the 'const' to prevent modification
cout << str << endl;
}
int main() {
string myString = "welcome to world of C++!";
printString(myString);
return 0;
}