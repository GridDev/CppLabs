#include <iostream>
using namespace std;

int s2() {
	int a, mem;
	cout << "Input the number:\n";
	try {
		cin >> a;
		if (!cin)
			throw "Not an integer number!\n";
		mem = a;
	}
	catch (const char* errorString) {
		cerr << errorString << endl;
		return -1;
	}
	int count = 0;
	if (a >= 0) {
		while (a != 0) {
			count += a & 1;
			a = a >> 1;
		}
	}
	else {	//If the number is negative right shift will add 1 to the left(cause sign bit)
		while (a != 0) {
			if ((a & INT_MIN) == INT_MIN)	//So, we shift to the left and mask with 100....000(INT_MIN)
				count++;
			a = a << 1;
		}
	}

	cout << "There are " << count << " one(s) in 32 bit, two's complement binary representation of " << mem << endl;
	return 0;
}