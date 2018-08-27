//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int maxValue = 0;
//int N;
//int board[20][20];
//void input() {
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &board[i][j]);
//		}
//	}
//}
//void copy(int temp[20][20], int from[20][20]) {
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			temp[i][j] = from[i][j];
//		}
//	}
//}
//
//
//void dfs(int list[20][20], int arrow, int count) {
//	if (count == 5) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				maxValue = max(maxValue, list[i][j]);
//				return;
//			}
//		}
//	}
//
//	for (int i = 0; i < 4; i++) {
//		int tempboard[20][20];
//		copy(tempboard, list);
//		dfs(tempboard, i, count + 1);
//	}
//
//}
//
//int main() {
//	input();
//	dfs(board, 0, 0);
//	
//	return 0;
//}
