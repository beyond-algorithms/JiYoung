//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//double calS(vector<int>& list, int start, int k) {
//	double avg = 0;
//	for (int i = start; i < start + k; i++) {
//		avg += list[i];
//	}
//	avg = avg / k;
//
//
//	double val = 0;
//	for (int i = start; i < start + k; i++) {
//		val += pow((list[i] - avg), 2);
//	}
//	val = val / k;
//	val = pow(val, 0.5);
//
//	return val;
//}
//
//void solve() {
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> numlist;
//
//	for (int i = 0; i < N; i++) {
//		int temp = 0;
//		cin >> temp;
//		numlist.push_back(temp);
//	}
//
//	double output = 10000000;
//	for (int i = 0; i < N - K + 2; i++) {
//		for (int j = K; j < N - i + 1; j++) {
//			double can = calS(numlist, i, j);
//			if (output > can) {
//				output = can;
//			}
//		}
//	}
//
//	cout << output << endl;
//}
//
//int main() {
//	cout.precision(15);
//	solve();
//	return 0;
//}