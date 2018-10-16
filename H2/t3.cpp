#include <iostream>
#include <string>
using namespace std;

bool palindrome(string a)
{
	int len = a.length();
	for (int i = 0; i < len / 2; ++i)
	{
		if (a[i] != a[len - i - 1])
			return false;
	}
	return true;
}

int t3()
{
	setlocale(LC_ALL, "rus");
	string a;
	bool pld;
	cout << "Введите слово: ";
	cin >> a;
	pld = palindrome(a);
	if (pld == 1)
		cout << "Слово является палиндромом";
	else
		cout << "Слово не является палиндромом";
	return 0;
}