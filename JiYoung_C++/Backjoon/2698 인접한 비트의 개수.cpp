#include <cstdio>
#include <iostream>

using namespace std;
/*���� S�� ũ�� n�� k�� �־����� ��, ������ ��Ʈ�� ������ k�� ���� S�� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ���, n�� 5�̰�, k�� 2�̸�, ���� S�� �� �� �ִ� ������ ������ ���� 6������ �ִ�.

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