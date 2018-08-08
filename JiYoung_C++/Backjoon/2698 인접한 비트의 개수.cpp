#include <cstdio>
#include <iostream>

using namespace std;
/*수열 S의 크기 n과 k가 주어졌을 때, 인접한 비트의 개수가 k인 수열 S의 개수를 구하는 프로그램을 작성하시오.

예를 들어, n이 5이고, k가 2이면, 수열 S가 될 수 있는 수열은 다음과 같이 6가지가 있다.

11100, 01110, 00111, 10111, 11101, 11011*/
int dp[101][100][2];

//int main() {
//	int testcase;
//	scanf("%d", &testcase);
//
//	dp[1][0][0] = 1;
//	dp[1][0][1] = 1;
//	int n = 0, k = 0;
//	
//	for (int i = 0; i < testcase; i++) {
//		scanf("%d %d", &n, &k);
//
//		for (int n = 2; n <= 100; n++) {
//			for (int k = 0; k < n; k++) {
//
//				dp[n][k][0] = dp[n - 1][k][0] + dp[n - 1][k][1];
//				dp[n][k][1] = dp[n - 1][k][0] + ((k > 0) ? dp[n - 1][k - 1][1] : 0);
//			}
//		}
//		printf("%d\n", dp[n][k][0] + dp[n][k][1]);
//	}
//
//	return 0;
//}