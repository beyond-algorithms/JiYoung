//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//private:
//public:
//	int maxArea(vector<int>& height) {
//		int maxSquare = 0, right = height.size() - 1, left = 0;
//		while (left < right) {
//			maxSquare = max(maxSquare, (right - left)*min(height[left], height[right]));
//			if (height[right] > height[left]) {
//				left++;
//			}
//			else {
//				right--;
//			}
//		}
//		return maxSquare;
//	}
//};