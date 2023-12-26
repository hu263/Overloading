/**
  * Operator Overloading Using a Friend
  */

#include <iostream>
using namespace std;

const int MAXARRAY = 5;

class myarray
{
private:
	int value[MAXARRAY];

public:
	void setvalue(int index, int newvalue){
		value[index]=newvalue;}
	
  int getvalue(int index){
		return value[index];}

// the function for overloading the + operator is declared as a friend function here, taking two objects of the class myarray as parameters
	friend myarray operator+(myarray array1, myarray array2); 
};

// the friend function for operator+ is defined here, OUTSIDE of the myarray class
myarray operator+(myarray array1, myarray array2)
{
	myarray temparray;
	for (int i=0; i<MAXARRAY; i++)
		temparray.value[i]=array1.value[i] + array2.value[i];
	return temparray;
}
int main ()
{

	myarray array1, array2, array3;
	
	//INITIALIZE 
	for (int i=0; i<MAXARRAY; i++)
	{
		array1.setvalue(i,i);
		array2.setvalue(i,i+3);
	}
	
	//ADD 
//The two myarray objects are added together here, with the results stored into a third myarray object
	array3=array1 + array2; 
	
	//PRINT 
	cout << "array1   array2   array3" << endl;
	for (int i=0; i<MAXARRAY; i++)
		cout << array1.getvalue(i) << "        " 
		     << array2.getvalue(i) << "        " 
		     << array3.getvalue(i) << endl;

	return 0;
}