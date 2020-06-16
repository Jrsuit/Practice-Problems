//Given an array, this program changes all elements to a value of 0
#include <iostream>

using namespace std;

int main()
{
	int array[] = { 0,1,2,3,4,5 };
	int* e = array; //int e points to array[0] (first element)
	int* l = e + 6; // int l points to the one past the last element of array[]

	while (e != l)
	{
		array[*e] = 0;
		cout << *e << endl;
		++e;
	}
	return 0;
}