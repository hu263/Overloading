#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "House.h"

// default constructor (may leave garbage in all fields of house)
House::House()
{
}

// destructor
House::~House()
{
}

// initializing constructor
House::House(string initAddress, string initOwner,
		unsigned int initCost, bool initFireplace)
{
	address = initAddress;
	owner = initOwner;
	cost = initCost;
	fireplace = initFireplace;
}

// copy constructor
House::House(const House& original)
{
	address = original.address;
	owner = original.owner;
	cost = original.cost;
	fireplace = original.fireplace;
}

// equality operator
bool House::operator== (const House& h) const
{
	if (address != h.address) return false;
	if (owner != h.owner) return false;
	if (cost != h.cost) return false;
	if (fireplace != h.fireplace) return false;
	return true;
}

// assignment operator
House& House::operator= (const House& h)
{
	if (this != &h)
	{
		address = h.address;
		owner = h.owner;
		cost = h.cost;
		fireplace = h.fireplace;
	}
	// always use this at the end of the operator=
	// if you declare it to return ClassName&
	return *this;
}

/*	Commented out one version of the + operator
	This version doesn't need +=, which otherwise
	makes it pretty easy to implement (see below)
	
House House::operator+ (const House& h)
{
	House newHouse;
	newHouse = *this;
	newHouse.address += " + " + h.address;
	newHouse.owner += " + " + h.owner;
	newHouse.cost += h.cost;
	newHouse.fireplace = newHouse.fireplace || h.fireplace;
	return newHouse;
}
*/

House& House::operator+= (const House& h)
{
	address += " + " + h.address;
	owner += " + " + h.owner;
	cost += h.cost;
	fireplace = fireplace || h.fireplace;
	return *this;
}

House House::operator+ (const House& h)
{
	House newHouse;
	newHouse = *this;
	newHouse += h;
	return newHouse;
}

void House::print(ostream& out) const
{
	cout << "HOUSE" << endl;
	cout << "Location: " << address << endl;
	cout << "Owner: " << owner << endl;
	cout << "Cost: " << cost << endl;
	cout << "Fireplace: " << fireplace << endl;
	cout << endl;
}

void House::print() const
{
	print(cout);
}

/*
// The following implementation would work if the fields of
//  the House class were public.
ostream& operator<< (ostream& out, const House& h)
{
	out << "HOUSE:" << endl;
	out << "Location: " << h.address << endl;
	out << "Owner: " << h.owner << endl;
	out << "Cost: " << h.cost << endl;
	out << "Fireplace: " << h.fireplace << endl;
	out << endl;
	return out;
}
*/

// The following implementation uses the member function
//  print(ostream& out)
//  to print the private member variables.
ostream& operator<< (ostream& out, const House& h)
{
	h.print(out);
	return out;
}