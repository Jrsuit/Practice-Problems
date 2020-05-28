/* This program reads an unknown amount of user input (ISBN, units sold, and price) and computes the sum of
units sold and revenue. ISBNs must be identical to add the values.*/

#include <iostream>
#include <string>

using namespace std;

struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double cost = 0.0;
	double revenue = 0.0;
};

int main()
{
	Sales_data item, otherItem;

	//takes in first line of data
	cin >> item.bookNo >> item.units_sold >> item.cost;

	item.revenue = item.units_sold * item.cost;
	double totalRevenue = item.revenue;
	int totalSold = item.units_sold;

	//gathers and computes data from remaining lines; quits when ^z is typed by user
	while (cin >> otherItem.bookNo >> otherItem.units_sold >> otherItem.cost)
	{
		otherItem.revenue = otherItem.units_sold * otherItem.cost;

		if (item.bookNo == otherItem.bookNo)
		{
			totalSold += otherItem.units_sold;
			totalRevenue += otherItem.revenue;
		}
		else
		{
			cout << "ISBNs do not match" << endl;
		}
	}

	cout << endl;
	cout << "ISBN: \t\t" << "Total Revenue: \t" << "Sales Sum: \t" << endl;
	cout << item.bookNo << "\t" << totalRevenue << "\t\t" << totalSold;

	return 0;
}