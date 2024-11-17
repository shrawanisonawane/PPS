#include <iostream>
using namespace std;

void fun(int* ptr) { *ptr = 50; }

int main()
{
int x = 60;
fun(&x);
cout << "x = " << x;

return 0;
}