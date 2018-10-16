#include <iostream>
using namespace std;

int t4() {
	int a[4];

	try {
		cout << "Input a,b,c,d" << endl;
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		if (!cin)
			throw "Not a 32 bit integer number!\n";
	}
	catch (const char* errorString)
	{
		cerr << endl << errorString << endl;
		return -1;
	}

	bool swap = true;
	int temp;
	int n = 4;
	while (swap) {
		swap = false;
		for (int i = 0; i < (n - 1); i++) {
			if (a[i + 1] > a[i]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				swap = true;
			}
		}
		n--;
	}

	for (int i = 3; i >= 0; i--)
		cout << a[i] << endl;

	return 0;
}