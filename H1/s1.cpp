#include <iostream>
using namespace std;

int s1() {
	try {
		double a, b, c;
		cout << "Type A, B and C - coefficients of quadratic equation\n";
		cin >> a >> b >> c;
		if (!cin)
			throw "A,B,C aren't numbers\n";
		if (a == 0) {
			if (b == 0) {
				if (c == 0)
					cout << "0 = 0\n";
				else
					cout << "Expression " << c << " = 0 makes no sense\n";
			}
			else
				cout << "Equation is linear, x = " << -c / b << endl;
		}
		else {
			int d = b * b - 4 * a*c;
			if (d == 0)
				cout << "Single root x = " << -b / (2 * a) << endl;
			else if (d > 0)
				cout << "Two roots x(1) = " << (-b + sqrt(d)) / (2 * a)
				<< ", x(2) = " << (-b - sqrt(d)) / (2 * a) << endl;
			else
				cout << "Two complex roots x(1) = 1/" << (2 * a) << "(" << -b << " + i*" << sqrt(abs(d))
				<< "), x(2) = 1/" << (2 * a) << "(" << -b << " - i*" << sqrt(abs(d)) << ")\n";
		}

	}
	catch (const char* errorString) {
		cerr << errorString << endl;
		return -1;
	}
	return 0;
}