#include <iostream>
using namespace std;

int s4() {
	int k;
	cout << "Input k\n";

	try {
		cin >> k;
		if (!cin)
			throw "Not an integer number!\n";
		if (k < 0)
			throw "k can't be a negative number";
	}
	catch (const char* errorString) {
		cerr << errorString << endl;
		return -1;
	}

	for (int i = 0; i < k; i++) {
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < k; i++) {
		for (int j = 1; j < k - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	if (k % 2) {
		int offset = (k - 1) / 2;
		for (int i = 0; i <= offset; i++) {
			for (int j = 0; j < offset - i; j++)
			{
				cout << " ";
			}
			for (int j = 0; j < (i + 1) * 2 - 1; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
		for (int i = offset; i > 0; i--) {
			for (int j = 0; j < offset - i + 1; j++)
			{
				cout << " ";
			}
			for (int j = 0; j < i * 2 - 1; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	else
		cout << "To make a diamond pattern k must be odd";
	return 0;
}