/*2���� �迭�� �־����� �� (i, j) ��ġ���� (x, y) ��ġ������ ����Ǿ� �ִ� ������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
�迭�� (i, j) ��ġ�� i�� j���� ��Ÿ����.
�Է�
ù° �ٿ� �迭�� ũ�� N, M(1 �� N, M �� 300)�� �־�����. ���� N���� �ٿ��� M���� ������ �迭�� �־�����. 
�迭�� ���ԵǾ� �ִ� ���� ������ 10,000���� �۰ų� ���� �����̴�. �� ���� �ٿ��� ���� ���� �κ��� ���� K(1 �� K �� 10,000)�� �־�����. 
���� K���� �ٿ��� �� ���� ������ i, j, x, y�� �־�����(i �� x, j �� y).*/


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