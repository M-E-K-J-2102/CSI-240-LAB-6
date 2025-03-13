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

#ifndef _ITEM_H
#define _ITEM_H

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class Item
{
	protected:
		string mCode;
		double mPrice;
		int mQuantity;

	public:
		Item();
		Item(string, double, int);
		~Item();

		string getCode();
		double getPrice();
		int getQuantity();

		void setCode(string);
		void setPrice(double);
		void setQuantity(int);

		friend istream& operator>>(istream&, Item&);
		friend ostream& operator<<(ostream&, Item);
};
#endif