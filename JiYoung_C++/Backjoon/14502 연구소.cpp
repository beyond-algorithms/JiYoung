////½ÇÆÐ
//
//
//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int maxValue;
//int row, col;
//int block[4][2] = { {-1,0}, {0,-1}, {0,1}, {1,0} };
//void spread(vector< vector<int> >& list, int row, int col) {
//	for (int i = 0; i < 4; i++) {
//		if (list[row - block[i][0]][col - block[i][1]] == 0) {
//		}
//	}
//}
//
//int calculateSafeZone(vector< vector<int> >& list) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			if (list[i][j] == 2) {
//			}
//		}
//	}
//	return 0;
//}
//
//
//void recursive(vector< vector<int> >& list, int wall) {
//	if (wall == 3) {
//		vector< vector<int> > temp(list);
//		maxValue = max(maxValue, calculateSafeZone(temp));
//		return;
//	}
//
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			if (list[i][j] == 0) {
//				list[i][j] = 1;
//				recursive(list, wall + 1);
//				list[i][j] = 0;
//			}
//		}
//	}
//}
//
//
//
//int main() {
//	cin >> row >> col;
//
//	vector< vector<int> > arr;
//	for (int i = 0; i < row; i++) {
//		vector<int> temp;
//		for (int j = 0; j < col; j++) {
//			int k = 0;
//			scanf("%d", &k);
//			temp.push_back(k);
//		}
//		arr.push_back(temp);
//	}
//
//
//
//
//	return 0;
//}