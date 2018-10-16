#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	unsigned sw;
	cout << "Input function code (1-4)" << endl;;

	try {
		cin >> sw;
		if (!cin)
			throw "Input isn't an integer number";
	}
	catch (const char* errorString) {
		cerr << errorString << endl;
		return -1;
	}

	switch (sw) {
	case 1: t1();
		break;
	case 2: t2();
		break;
	case 3: t3();
		break;
	case 4: t4();
		break;
	default: cout << "Not a valid function code, use numbers 1-4" << endl;
		break;
	}



	return 0;
}
