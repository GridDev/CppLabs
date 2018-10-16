#include <iostream>
using namespace std;

bool primality_test(int a);

int t2() {
	int a;

	try {
		cout << "Input the number\n";
		cin >> a;
		if (!cin)
			throw "Not a 32 bit integer number!\n";
	}
	catch (const char* errorString) {
		cerr << errorString << endl;
		return -1;
	}

	bool ans = primality_test(a);
	if (ans)
		cout << a << " is a prime number\n";
	else
		cout << a << " is a composite number\n";

	return 0;
}


bool primality_test(int a) {
	if (a < 2)
		return 0;
	int root = sqrt(a);
	if (a % 2 == 0 and a != 2)
		return false;
	for (int i = 3; i <= root; i+=2) {
		if (a%i == 0)
			return false;
	}
	return true;
}
