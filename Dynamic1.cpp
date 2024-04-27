#include <iostream>
#include <string>
using namespace std;
int main() {
    
    int* dynamicInt = new int;


    string* dynamicString = new string;

 
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    
    cout << "Enter a string value: ";
    cin.ignore(); 
    getline(cin, *dynamicString);

    
    cout << "The value of the dynamically allocated integer: " << *dynamicInt << endl;
    cout << "The value of the dynamically allocated string: " << *dynamicString << endl;

   
    delete dynamicInt;
    delete dynamicString;

    return 0;
}

