//#include <iostream>
//
//using namespace std;
//
//int store[1010];
//void solve(int n) {
//	store[0] = 1;
//	store[1] = 1;
//	for (int i = 2; i < n+1; i++) {
//		store[i] = (store[i - 1] + store[i - 2] * 2)%10007;
//	}
//
//	cout << store[n] << endl;
//}


//int main() {
//	int n;
//	cin >> n;
//	solve(n);
//	return 0;
//}