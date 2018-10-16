#include <cmath>

bool primality_test(int a) {
	if (a < 2)
		return 0;
	int root = sqrt(a);
	if (a % 2 == 0 and a != 2)
		return false;
	for (int i = 3; i <= root; i += 2) {
		if (a%i == 0)
			return false;
	}
	return true;
}


int prime(int* a, int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (primality_test(a[i]))
			count++;
	}
	return count;
}