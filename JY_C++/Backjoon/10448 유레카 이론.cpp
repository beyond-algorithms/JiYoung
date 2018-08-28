//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
////Tn = 1 + 2 + 3 + ... + n = n(n+1)/2
//
//int dp[1001];
//int testcase, num;
//void calculateDP() {
//	dp[1] = 1;
//	for (int i = 2; i < 1001; i++) {
//		dp[i] = dp[i - 1] + i;
//	}
//}
//
//int isPossible(int number) {
//	for (int i = 1; i < number; i++) {
//		for (int j = 1; j < number; j++) {
//			for (int k = 1; k < number; k++) {
//				if (dp[i] + dp[j] + dp[k] == num) {
//					return 1;
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//
//int main() {
//	calculateDP();
//
//	cin >> testcase;
//	for (int i = 0; i < testcase; i++) {
//		cin >> num;
//		int ans = isPossible(num);
//		cout << ans << endl;
//	}
//
//
//	return 0;
//}