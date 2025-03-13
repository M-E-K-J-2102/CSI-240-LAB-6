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

#include "Book.h"

// ------ Constructors/Destructors ------

// Default constructor
Book::Book() :Item()
{
	mTitle = "";
	mAuthor = "";
}

// Copy constructor
Book::Book(string code, string title, string author, double price, int quantity) : Item(code, price, quantity)
{
	mTitle = title;
	mAuthor = author;
}

// Destructor
Book::~Book()
{

}


// ------ Getters ------

/* Function:   getAuthor
*   Purpose:   Gets the Books's author
*       Pre:   mAuthor must be initialized
*      Post:   mAuthor is returned
****************************************************************/
string Book::getAuthor()
{
	return mAuthor;
}

/* Function:   getTitle
*   Purpose:   Gets the Books's title
*       Pre:   mTitle must be initialized
*      Post:   mTitle is returned
****************************************************************/
string Book::getTitle()
{
	return mTitle;
}


// ------ Setters ------

/* Function:   setAuthor
*   Purpose:   sets the Books's author to desired value
*       Pre:   mAuthor must be initialized
*      Post:   mAuthor is changed
****************************************************************/
void Book::setAuthor(string author)
{
	mAuthor = author;
}

/* Function:   setTitle
*   Purpose:   Sets the Book's title to desired value
*       Pre:   mTitle must be initialized
*      Post:   mTitle is changed
****************************************************************/
void Book::setTitle(string title)
{
	mTitle = title;
}


// ------ Overloads ------

/*Pre:     Item and Book objects must be initialized
*Post:     Book object is stored into the input stream
*Purpose:  Makes Book object manipulation much easier
******************************************************/
istream& operator>>(istream& lhs, Book& rhs)
{
	lhs >> static_cast<Item&>(rhs);
	lhs.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(lhs, rhs.mAuthor);
	cin.clear();
	getline(lhs, rhs.mTitle);
	
	return lhs;
}

/*Pre:     Item and Book objects must be initialized
*Post:     Prints out Item's info
*Purpose:  Makes printing out objects easier
******************************************************/
ostream& operator<<(ostream& lhs, Book rhs)
{
	lhs << "Code: " << rhs.mCode << endl;
	lhs << "Price: " << rhs.mPrice << endl;
	lhs << "Quantity: " << rhs.mQuantity << endl;
	lhs << "Author: " << rhs.mAuthor << endl;
	lhs << "Title: " << rhs.mTitle << endl;

	return lhs;
}

