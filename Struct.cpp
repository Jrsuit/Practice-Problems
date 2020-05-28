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
	item1.revenue = item1.units_sold * item1.cost;

	cin >> item2.bookNo >> item2.units_sold >> item2.cost;
	item2.revenue = item2.units_sold * item2.cost;


	if (item1.bookNo == item2.bookNo) {
		int totalSold = item1.units_sold + item2.units_sold;
		double totalRevenue = item1.revenue + item2.revenue;

		cout << item2.bookNo << " " << totalSold << " " << totalRevenue;

		return 0;
	}
	else {
		cout << "ISBNs must be equivalent" << endl;
	}

	return 0;
}