/**
  * Member Operator Overloading
  */

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

	int getvalue(int index){
		return value[index];}

//the overloaded function is declared WITHIN the class here.  Notice that it only has one parameter because the second parameter is the object invoking the function
	myarray operator+(myarray array2)
	{
		myarray temparray;
		for (int i=0; i<MAXARRAY; i++)
			temparray.value[i]=value[i] + array2.value[i];
		return temparray;
	}
};

int main ()
{

	myarray array1, array2, array3;
	
	//INITIALIZE 
	for (int i=0; i<MAXARRAY; i++)
	{
		array1.setvalue(i,i);
		array2.setvalue(i,i+3);
	}

  array3=array1 + array2;
  // array3=array1.operator+(array2);

	//PRINT 
	cout << "array1   array2   array3" << endl;
	for (int i=0; i<MAXARRAY; i++)
		cout << array1.getvalue(i) << "        " 
		     << array2.getvalue(i) << "        " 
		     << array3.getvalue(i) << endl;

	return 0;
}