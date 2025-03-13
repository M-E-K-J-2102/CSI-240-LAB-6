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

#include "Comic.h"

// ------ Constructors/destructors ------

// Default constructor
Comic::Comic() : Book()
{
	mVolume = -1;
	mSeries = -1;
}

// Copy constructor
Comic::Comic(string code, string title, string author, double price, int quantity, int volume, int series) : Book(code, title, author, price, quantity)
{
	mVolume = volume;
	mSeries = series;
}

// Destructor
Comic::~Comic()
{

}


// ------ Getters ------

/* Function:   getSeries
*   Purpose:   gets the Comic's series
*       Pre:   mSeries must be initialized
*      Post:   mSeries is returned
****************************************************************/
int Comic::getSeries()
{
	return mSeries;
}

/* Function:   setVolume
*   Purpose:   Gets the Comic's Volume 
*       Pre:   mVolume must be initialized
*      Post:   mVolume is returned
****************************************************************/
int Comic::getVolume()
{
	return mVolume;
}


// ------ Setters ------

/* Function:   setSeries
*   Purpose:   Sets the Comic's series to a desired value
*       Pre:   mSeries must be initialized
*      Post:   mSeries is updated
****************************************************************/
void Comic::setSeries(int series)
{
	mSeries = series;
}

/* Function:   setVolume
*   Purpose:   Sets the Comic's volume to a desired value
*       Pre:   mVolume must be initialized
*      Post:   mVolume is updated
****************************************************************/
void Comic::setVolume(int volume)
{
	mVolume = volume;
}


// ------ Overloads ------

/*Pre:     Comic object must be initialized
*Post:     Prints out the object's data
*Purpose:  Makes it easier to print a whole object
******************************************************/
istream& operator>>(istream& lhs, Comic& rhs)
{
	lhs >> static_cast<Book&>(rhs);
	//lhs.ignore(numeric_limits<streamsize>::max(), '\n');
	lhs >> rhs.mSeries;
	lhs >> rhs.mVolume;
	return lhs;
}

/*Pre:     Comic object must be initialized
*Post:     Prints out the object's data
*Purpose:  Makes it easier to print a whole object
******************************************************/
ostream& operator<<(ostream& lhs, Comic rhs)
{
	lhs << static_cast<Book&>(rhs);
	lhs << "Series: " << rhs.mSeries << endl;
	lhs << "Volume: " << rhs.mVolume << endl;

	return lhs;
}