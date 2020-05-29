//This program computes the number of times each identical textbook ISBN (bookNo) is entered into the input.

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
	int count = 1;

	//gathers and computes data from remaining lines; quits when ^z is typed by user
	while (cin >> otherItem.bookNo >> otherItem.units_sold >> otherItem.cost)
	{
		if (item.bookNo == otherItem.bookNo)
		{
			count += 1;
		}
		else
		{
			cout << "ISBN: \t\t" << "Count: \t" << endl;
			cout << item.bookNo << "\t" << count << "\n\n";

			count = 1;
		}
		item.bookNo = otherItem.bookNo;
	}

	cout << endl;
	cout << "ISBN: \t\t" << "Count: \t" << endl;
	cout << item.bookNo << "\t" << count;
	return 0;
}
/*Sample input:
0-201-78345-X 3 20.00
0-201-78345-X 20 10.00
0-301-89765-X 3 15.00 
*/