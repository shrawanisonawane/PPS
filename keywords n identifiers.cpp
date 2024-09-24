#include <iostream>
using namespace std;

int main() 
{
    //Keywords are reserved by the language and cannot be used as identifiers
    int myVariable=10; 
    float anotherVariable=20.5f;
    bool isTrue=true;
    
    cout<<"The value of myVariable is:"<<myVariable<<endl;
    cout<<"The value of anotherVariable is:"<<anotherVariable<<endl;
    cout<<"The value of isTrue is:"<<(isTrue ? "true":"false")<<endl;
    
    //Demonstrate the use of a keyword in control flow
    if(isTrue){
      cout<<"The condition is true!"<<endl;
    }else{
      cout<<"The contition is false!"<<endl;
      
    }
    return 0;
}