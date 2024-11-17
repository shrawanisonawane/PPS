#include <iostream>
using namespace std;
int main() {
int numbers[3]; // Declares an array of size 3
// Input values for the array
cout << "Enter 3 numbers:\n";
for (int i = 0; i < 3; i++) {
cin >> numbers[i];
}
// Output the values of the array
cout << "You entered: ";
for (int i = 0; i < 3; i++) {
cout << numbers[i] << " ";
}
return 0;
}