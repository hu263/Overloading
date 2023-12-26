#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "House.h"

int main()
{
	House 	h1("123 Walnut",        "Clem", 182000, true);
	House 	h2("127 Walnut",        "Jed",  196000, true);
	House   h4;

	cout << endl << "House h1: " << endl;
	h1.print();

	cout << endl << "House h2: " << endl;
	h2.print(cout);

	if (h1 == h2) cout << endl << "h1 == h2" << endl;
	else cout << endl << "h1 != h2" << endl;

	if (h1 == h1) cout << endl << "h1 == h1" << endl;
	else cout << endl << "h1 != h1" << endl;

	//h3 = h2;
  House h3(h2);
	cout << endl << "House h3 = h2 " << endl;
	// use the insertion operator (i.e. <<) that we defined 
	cout << h3;

	h4 = h1 + h2;
	cout << endl << "House h4 = h1 + h2 " << endl << h4;

	h4 += h2;
	cout << endl << "House h4 += h2 " << endl << h4;

	House h5(h3);
	cout << endl << "House h5, copied from h3" << endl << h5;

	return 0;
}