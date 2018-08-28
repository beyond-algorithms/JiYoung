//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//
//class Solution {
//public:
//	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//		priority_queue<int, vector<int>, less<int>> myq;
//
//		for (int i = 0; i < nums1.size(); i++) {
//			myq.push(nums1[i]);
//		}
//		for (int i = 0; i < nums2.size(); i++) {
//			myq.push(nums2[i]);
//		}
//
//		int cnt = myq.size();
//
//		if (cnt % 2 == 0) {
//			double output = 0;
//			for (int i = 0; i < cnt/2; i++) {
//				output = myq.top();
//				myq.pop();
//			}
//			output += myq.top();
//			return output / 2;
//		}
//		else {
//			double output = 0;
//			for (int i = 0; i < (cnt / 2) +1; i++) {
//				output = myq.top();
//				myq.pop();
//			}
//			return output;
//		}
//	}
//};
//
//int main() {
//	Solution s1 = Solution();
//
//	vector<int> a;
//	a.push_back(1);
//	a.push_back(2);
//
//	vector<int> b;
//	b.push_back(3);
//	b.push_back(4);
//
//
//	cout << s1.findMedianSortedArrays(a, b) << endl;
//	return 0;
//}