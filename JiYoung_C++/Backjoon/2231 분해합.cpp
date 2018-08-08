//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int calSum(int num) {
//	int ret = 0;
//	while (num > 0) {
//		ret += num % 10;
//		num /= 10;
//	}
//	return ret;
//}
//int main() {
//	int output = 0;
//
//	int num;
//	cin >> num;
//
//	int temp = 0;
//
//	for (int i = 1; i < num; i++) {
//		temp = i + calSum(i);
//		if (temp == num) {
//			output = i;
//			break;
//		}
//	}
//
//	cout << output << endl;
//	return 0;
//}