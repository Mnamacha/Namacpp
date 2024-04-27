#include <iostream>
using namespace std;
int main()
{
	//declare pointer and initialise it
	//so that it doesnt store a random address
	int* pPointer = nullptr;
	int integerVar =5;
	//assign pointer to address of object 
	pPointer = &integerVar;
	
	//output the value of integerVar
	cout<<"integerVar: "<<integerVar<<endl;
	//output the address of integerVar
	cout<<"Address of integerVar: "<<&integerVar<<endl;
	//output the address of pPointer
	cout<<"Address of pointer "<< &pPointer<<endl;
	return 0;
	
}

