#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string str;
	bool alphabet[26];
	for (int i = 0; i < 26; i++)
		alphabet[i] = false;
	cout << "Enter your string : ";
	cin >> str;
	for (int i = 0, len = str.length(); i < len; i++)
		if (((int)str[i] > 64 && (int)str[i] < 91) || ((int)str[i] > 96 && (int)str[i] < 123))
			alphabet[i] = true;
	bool flag = true;
	for (int i = 0; i < 27; i++)
		if (alphabet[i] == false)
			flag = false;
	cout << ((flag == true) ? "\nString contains all characters of the eng alphabet \n" :
		"\nstring does not contain all characters of the eng alphabet\n");
	return 0;
}