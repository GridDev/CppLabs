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
	cout << "������� �����: ";
	cin >> a;
	pld = palindrome(a);
	if (pld == 1)
		cout << "����� �������� �����������";
	else
		cout << "����� �� �������� �����������";
	return 0;
}