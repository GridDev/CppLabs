#include <iostream>
#include "Header.h"
using namespace std;
const int n = 10;

int main() {
	int a[n]; int ll; int ul;

	if (input(a, n) != 0)
		return -1;

	cout << endl;
	output(a, n);

	if (symmetry(a, n))
		cout << endl << "The array is symmetrical" << endl;
	else
		cout << endl << "The array isn't symmetrical" << endl;

	try {
		cout << endl << "Lower limit = ";
		cin >> ll;
		cout << "Upper limit = ";
		cin >> ul;
		if (!cin)
			throw "Limits must be an integer!";
		if (ll > ul)
			throw "The upper limit must be bigger than the lower limit!";
	}
	catch (const char* err) {
		cerr << endl << err << endl;
		return -1;
	}

	cout << endl << "There are " << range(a, n, ll, ul) << " elements in the range ["
				<< ll << "," << ul << "]" << endl;
	
	cout << endl << "There are " << prime(a, n) << " prime numbers in the array";
		
	return 0;
}