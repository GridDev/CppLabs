#include <iostream>
using namespace std;

int input(int* a, int n) {
	try {
		cout << "Enter the " << n << " elements of the array" << endl;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (!cin) 
				throw "Elements of the array must be integers!";
		}
	}
	catch (const char* err) {
		cerr << endl << err << endl;
		return -1;
	}
	return 0;
}