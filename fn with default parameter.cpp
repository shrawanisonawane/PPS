#include <iostream>
using namespace std;
// Function definition with a default parameter
void displayInfo(string name, int age = 18) {
cout << "Name: " << name << ", Age: " << age << endl;
}
int main() {
// Function calls with and without the second argument
displayInfo("Shravani");
displayInfo("Shivani", 19);
return 0;
}