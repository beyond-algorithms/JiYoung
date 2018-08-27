//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
//int num;
//
//int caseOfNum(int number) {
//	if (number < 10) {
//		return 1;
//	}
//	else if (number < 100) {
//		return 2;
//	}
//	else if (number < 1000) {
//		return 3;
//	}
//	else if (number < 10000) {
//		return 4;
//	}
//	else if (number < 100000) {
//		return 5;
//	}
//	else if (number < 1000000) {
//		return 6;
//	}
//	else if (number < 10000000) {
//		return 7;
//	}
//	else if (number < 100000000) {
//		return 8;
//	}
//	else if (number == 100000000) {
//		return 9;
//	}
//	return 0;
//}
//
//int main() {
//	cin >> num;
//	int output = 0;
//	for (int i = 1; i <= num; i++) {
//		output += caseOfNum(i);
//	}
//	cout << output << endl;
//
//	return 0;
//}