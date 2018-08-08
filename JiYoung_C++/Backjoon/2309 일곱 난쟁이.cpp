//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//	int tall[9];
//	int sum = 0;
//	for (int i = 0; i < 9; i++) {
//		scanf("%d", &tall[i]);
//		sum += tall[i];
//	}
//
//	int flag = 0;
//	for (int i = 0; i < 9; i++) {
//		for (int j = i + 1; j < 9; j++) {
//			if (sum - tall[i] - tall[j] == 100) {
//				tall[i] = -1;
//				tall[j] = -1;
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//
//	sort(tall, tall + sizeof(tall)/sizeof(int));
//	for (int i = 2; i < 9; i++) {
//		printf("%d\n", tall[i]);
//	}
//
//	return 0;
//}