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

#ifndef _BOOK_H
#define _BOOK_H

#include "Item.h"

class Book : public Item
{
	private:
		string mAuthor;
		string mTitle;

	public:
		Book();
		Book(string, string, string, double, int);
		~Book();

		string getAuthor();
		string getTitle();

		void setAuthor(string);
		void setTitle(string);

		friend istream& operator>>(istream&, Book&);
		friend ostream& operator<<(ostream&, Book);
};



#endif