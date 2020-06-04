//Short program that converts characters of a word to 'X'
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string word;
	//Calculates size of input, index takes type of size
	decltype (word.size()) index = 0;
	if (cin >> word)
		while (index < word.size())
		{
			word[index] = 'X';
			index++;
		}
	cout << word;
	return 0;
}