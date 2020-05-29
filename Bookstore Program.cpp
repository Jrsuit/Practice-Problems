/*This program performs several calculations for user input of textbook data, such as the
number sold, average price, and total revenue for each ISBN*/

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
	Sales_data item1, item2;

	cin >> item1.bookNo >> item1.units_sold >> item1.cost;
	double totalRevenue = item1.units_sold * item1.cost;
	int totalQuantity = item1.units_sold;

	while (cin >> item2.bookNo >> item2.units_sold >> item2.cost)
	{
		item2.revenue = item2.units_sold * item2.cost;

		if (item1.bookNo == item2.bookNo)
		{
			totalRevenue += item2.revenue;
			totalQuantity += item2.units_sold;
		}
		else
		{
			cout << "ISBN: \t\t" << "Number Sold: \t" << "Average Cost: \t" << "Revenue: \n";
			cout << item1.bookNo << "\t" << totalQuantity << "\t\t"
				<< totalRevenue / totalQuantity << "\t\t" << totalRevenue;
			totalRevenue = item2.revenue;
			totalQuantity = item2.units_sold;
			item1.bookNo = item2.bookNo;

		}
	}
	cout << "ISBN: \t\t" << "Number Sold: \t" << "Average Cost: \t" << "Revenue: \n";
	cout << item2.bookNo << "\t" << totalQuantity << "\t\t" << totalRevenue / totalQuantity
		<< "\t\t" << totalRevenue;
	return 0;
}