#include <iostream>
using namespace std;

int s1();
int s2();
int s3();
int s4();

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
	case 1: s1();
		break;
	case 2: s2();
		break;
	case 3: s3();
		break;
	case 4: s4();
		break;
	default: cout << "Not a valid function code, use numbers 1-4" << endl;
		break;
	}



	return 0;
}
