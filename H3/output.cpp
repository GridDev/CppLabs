#include <iostream>
using namespace std;

void output(int* a, int n) {
	for (int i = 0; i < n; i++)
		cout << "a[" << i << "]=" << a[i] << ' ';
	cout << endl;
}