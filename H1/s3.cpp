#include <iostream>
using namespace std;


int s3() {
	unsigned int a;
	int b = 0;
	cout << "Input the number:\n";

	try {

		cin >> a;
		if (!cin)
			throw "Not an integer number!\n";
	}
	catch (const char* errorString) {
		cerr << errorString << endl;
		return -1;
	}

	int count = 32;
	bool bit = 0;
	
	while (count--) {
		bit = a & 1;
		cout << bit;
		b *= 2;
		b |= bit;
		a = a >> 1;
	}
	
	cout << endl << b << endl;


}
