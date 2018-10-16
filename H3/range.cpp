int range(int* a, int n, int ll, int ul) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= ll && a[i] <= ul)
			k++;
	}
	return k;
}