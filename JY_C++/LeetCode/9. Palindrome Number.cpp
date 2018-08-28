//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	bool isPalindrome(int x) {
//		if (x < 0) {
//			return false;
//		}
//		vector<int> number;
//		while (x > 0) {
//			number.push_back(x % 10);
//			x /= 10;
//		}
//		int length = number.size();
//		int j = length - 1;
//		for (int i = 0; i < length / 2; i++) {
//			if (number[i] != number[j]) {
//				return false;
//			}
//			j--;
//		}
//		return true;
//	}
//};
//
//int main() {
//	Solution s1 = Solution();
//	int a = 12321;
//	cout << s1.isPalindrome(a);
//	return 0;
//}