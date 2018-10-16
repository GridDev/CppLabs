#include <iostream>
#include <string>
using namespace std;

bool palindrome(string a);

int t3()
{
	//setlocale(LC_ALL, "rus");
	string a;
	bool pld;
	cout << "Input the word: ";
	cin >> a;
	pld = palindrome(a);
	if (pld)
		cout << "The word is a palindrome";
	else
		cout << "The word is not a palindrome";
	return 0;
}

bool palindrome(string a)
{
	int len = a.length();
	for (int i = 0; i < len / 2; i++)
	{
		if (a[i] != a[len - i - 1])
			return false;
	}
	return true;
}
