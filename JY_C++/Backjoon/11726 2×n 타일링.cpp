//#include <cstdio>
//#include <iostream>
//using namespace std;


//int main() {
//	int n;
//	cin >> n;
//
//	int dp[1001];
//	dp[0] = 1;
//	dp[1] = 1;
//	for (int i = 2; i <= n; i++) {
//		dp[i] = dp[i - 1] + dp[i-2];
//	}
//	int output = dp[n] * 10007;
//	cout << output << endl;
//	return 0;
//}