/*
Author:           Matthew Kane
Class:            CSI-240-04
Assignment:       Lab 6
Date Assigned:    29/3/2024
Due Date:         4/2/2024 @ 1:00 PM

Description:
A lab that helps practice inheritance

Certification of Authenticity:
I certify that this is entirely my own work, except where I have given
fully-documented references to the work of others. I understand the definition and
consequences of plagiarism and acknowledge that the assessor of this assignment
may, for the purpose of assessing this assignment:
- Reproduce this assignment and provide a copy to another member of academic staff;
and/or
- Communicate a copy of this assignment to a plagiarism checking service (which may
then retain a copy of this assignment on its database for the purpose of future
plagiarism checking)
-----------------------------------------------------------------------------------------
Sources:
*/

#include "Item.h"

// ------ Constructors ------

// Default constructor
Item::Item()
{
	mCode = "";
	mPrice = -1;
	mQuantity = -1;
}

// Copy constructor
Item::Item(string code, double price, int quantity)
{
	mCode = code;
	mPrice = price;
	mQuantity = quantity;
}

// ------ Destructor ------

// Default destructor
Item::~Item()
{

}


// ------ Getters ------

/* Function:   GetCode
*   Purpose:   Gets the item's code
*       Pre:   mCode must be initialized
*      Post:   mCode is returned
****************************************************************/
string Item::getCode()
{
	return mCode;
}

/* Function:   GetPrice
*   Purpose:   Gets the item's price
*       Pre:   mPrice must be initialized
*      Post:   mPrice is returned
****************************************************************/
double Item::getPrice()
{
	return mPrice;
}


// ------ Setters ------

/* Function:   GetQuantity
*   Purpose:   Gets the item's quantity
*       Pre:   mQuantity must be initialized
*      Post:   mQuantity is returned
****************************************************************/
int Item::getQuantity()
{
	return mQuantity;
}

/* Function:   setCode
*   Purpose:   sets the item's code to desired value
*       Pre:   mCode must be initialized
*      Post:   mCode is changed
****************************************************************/
void Item::setCode(string code)
{
	mCode = code;

	return;
}

/* Function:   setPrice
*   Purpose:   sets the item's price to desired value
*       Pre:   mPrice must be initialized
*      Post:   mPrice is changed
****************************************************************/
void Item::setPrice(double price)
{
	mPrice = price;

	return;
}

/* Function:   setQuantity
*   Purpose:   sets the item's Quantity to desired value
*       Pre:   mQuantity must be initialized
*      Post:   mQuantity is changed
****************************************************************/
void Item::setQuantity(int quantity)
{
	mQuantity = quantity;

	return;
}

// ------ Overloads ------

/*Pre:     Item object must be initialized
*Post:     Object is stored
*Purpose:  facilitates saving an object into an inputsream
******************************************************/
istream& operator>>(istream& lhs, Item& rhs)
{
	// Ask user for info and then srore it into objet
	// Different class objects have didferent amounts of data
	getline(lhs, rhs.mCode);
	lhs >> rhs.mPrice;
	lhs >> rhs.mQuantity;

	return lhs;
}

/*Pre:     Item object must be initialized
*Post:     Prints out the object's data
*Purpose:  Makes it easier to print a whole object
******************************************************/
ostream& operator<<(ostream& lhs, Item rhs)
{
	// print out object
	lhs << "Code: " << rhs.mCode << endl;
	lhs << "Price: " << rhs.mPrice << endl;
	lhs << "Quantity: " << rhs.mQuantity << endl;

	return lhs;
}