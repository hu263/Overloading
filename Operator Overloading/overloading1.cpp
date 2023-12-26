/**
  * Operator Overloading
  */

#include <iostream>
using namespace std;

#define MAXARRAY 5

int main ()
{

	int array1[MAXARRAY], array2[MAXARRAY], array3[MAXARRAY];
	int i=0;
	
	//INITIALIZE 
	for (i=0; i<MAXARRAY; i++)
	{
		array1[i]=i;
		array2[i]=i+3;
	}
	
	//ADD 
	for (i=0; i<MAXARRAY; i++)
		array3[i]=array1[i] + array2[i];
	
	//PRINT 
	cout << "array1   array2   array3" << endl;
	for (i=0; i<MAXARRAY; i++)
		cout << array1[i] << "        " 
		     << array2[i] << "        " 
		     << array3[i] << endl;

	return 0;
}