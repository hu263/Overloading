#ifndef House_h
#define House_h

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class House 
{
	string address;
	string owner;
	unsigned int cost;
	bool fireplace;
    public:
	// default constructor
	House();

	// destructor
	~House();

	// initializing constructor
	House(string initAddress, string initOwner,
		unsigned int initCost, bool initFireplace);

	// copy constructor
	House(const House& original);

	// equality operator
	bool operator== (const House& h) const;

	// assignment operator
	House& operator= (const House& h);

	House& operator+= (const House& h);

	House operator+ (const House& h);

	void print(ostream& out) const;

	void print() const;
};

ostream& operator<< (ostream& out, const House& h);

#endif
