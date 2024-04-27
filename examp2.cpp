#include <iostream>
using namespace std;
int main()
{
	int firstValue;
	int secondValue;
	int* pPointer = nullptr;
	//assign pointer with the address of first value
	pPointer =&firstValue;
	*pPointer = 10;// indirection
	//assign pointer with the address of secondValue
	pPointer = &secondValue;
	*pPointer = 20; // indirection
	cout << "first value is " << firstValue << '\n';
	cout << "secondValue is "<< secondValue << '\n';
	return 0;
	
}
