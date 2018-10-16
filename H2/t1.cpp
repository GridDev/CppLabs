#include <iostream>
using namespace std;
float max_three(float a, float b, float c);


int t1() {
	float a,b,c,d,e,max;

	try {
		cout << "Input a,b,c,d,e\n";
		cin >> a >> b >> c >> d >> e;
		if (!cin)
			throw "Not a 32 bit integer number!\n";
	}
	catch (const char* errorString)
	{
		cerr << endl << errorString << endl;
		return -1;
	}

		max = max_three(a, b, c);
		max = max_three(max, d, e);
		cout << "max = " << max;
	
	return 0;
}

float max_three(float a, float b, float c) {
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;
}
