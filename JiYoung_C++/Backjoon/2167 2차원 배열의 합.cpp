/*2차원 배열이 주어졌을 때 (i, j) 위치부터 (x, y) 위치까지에 저장되어 있는 수들의 합을 구하는 프로그램을 작성하시오. 
배열의 (i, j) 위치는 i행 j열을 나타낸다.
입력
첫째 줄에 배열의 크기 N, M(1 ≤ N, M ≤ 300)이 주어진다. 다음 N개의 줄에는 M개의 정수로 배열이 주어진다. 
배열에 포함되어 있는 수는 절댓값이 10,000보다 작거나 같은 정수이다. 그 다음 줄에는 합을 구할 부분의 개수 K(1 ≤ K ≤ 10,000)가 주어진다. 
다음 K개의 줄에는 네 개의 정수로 i, j, x, y가 주어진다(i ≤ x, j ≤ y).*/


//#include <iostream>
//#include <cstdio>
//#include <vector>
//using namespace std;
//
//int rowSum[301];

//int main() {
//	int N, M;
//	scanf("%d %d", &N, &M);
//	vector< vector<int> > arr;
//	for (int i = 0; i < N; i++) {
//		vector<int> temp;
//		temp.resize(M);
//		arr.push_back(temp);
//	}
//	int ithSum = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%d", &arr[i][j]);
//			ithSum += arr[i][j];
//			rowSum[i + 1] = ithSum;
//
//		}
//	}
//
//	int K;
//	scanf("%d", &K);
//
//	int i, j, x, y;
//	for (int i = 0; i < K; i++) {
//		scanf("%d %d %d %d", &i, &j, &x, &y);
//	}
//	return 0;
//}









//int main() {
//	int i, j, k, x, y, t, n, m, x2, y2, sum = 0;
//	int num[300][300] = { { 0, },{ 0, } };
//	scanf("%d %d", &x, &y);
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			scanf("%d", &num[i][j]);
//		}
//	}
//	scanf("%d", &t);
//	for (k = 0; k < t; k++) {
//		scanf("%d %d %d %d", &x2, &y2, &n, &m);
//		for (i = x2 - 1; i < n; i++) {
//			for (j = y2 - 1; j < m; j++) {
//				sum += num[i][j];
//			}
//		}
//		printf("%d\n", sum);
//		sum = 0;
//	}
//	return 0;
//}