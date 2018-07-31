#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


int sequentialSearch(int list[], int n, int key) {
	for (int i = 0; i < n; i++) {
		if (list[i] == key)
			return i;
	}
	return -1;
}

void sub(int x, int arr[]) {
	x = 10;
	arr[0] = 10;

	cout << x <<" x입니다 "<<arr[0] << endl;
}

int main() {
	int a= 1;
	int b[5];
	b[0] = 1;

	sub(a, b);

	cout << a << " a입니다 " << b[0] <<endl;


	return 0;
}