/**
  * Operator Overloading and "This" pointer
  */

// The reason is because whenever a member function is called, an implicit argument is sent to point to the object that called (or invoked) the member function. This pointer is called this

#include <iostream>
using namespace std;

#define MAXARRAY 5

class myarray 
{
private:
	int value[MAXARRAY];

public:
	void setvalue(int index, int newvalue){
		value[index]=newvalue;}

	// int getvalue(int index){
	// 	return value[index];}    
	
  int getvalue(int index){
		return value[index];}

	// pass by reference so that a copy isn't made
	// use "const" so that it isn't modified
	myarray operator=(const myarray &array2)
	{
		// Can check if both sides are equal, 
		// then don't have to do anything, just return
		if (this!=&array2)
		{
			for (int i=0; i<MAXARRAY; i++)
				value[i]=array2.value[i];
		}
		return *this;
	}
};

int main ()
{
	int i;
	myarray array1, array2, array3;
	
	//INITIALIZE 
	for (i=0; i<MAXARRAY; i++)
	{
		array1.setvalue(i,i);
		array2.setvalue(i,i+3);
	}
	
	//ASSIGN
	array3=array1=array2;   
	//array3 and array1 now equal array2 

	
	//PRINT 
	cout << "array1   array2   array3" << endl;
	for (i=0; i<MAXARRAY; i++)
		cout << array1.getvalue(i) << "        " 
		     << array2.getvalue(i) << "        " 
		     << array3.getvalue(i) << endl;

	cout << endl;
	cout << "address of the three arrays:" << endl;
	cout << "array1   array2   array3" << endl;
	cout << &array1 << "  " << &array2 << "  " 
		<< &array3  << endl;
	return 0;
}