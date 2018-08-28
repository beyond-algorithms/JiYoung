//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <map>
//#include <unordered_map>
//using namespace std;
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		unordered_map<int, int> myMap;
//		vector<int> result;
//		for (int i = 0; i < nums.size(); i++) {
//			unordered_map<int, int>::iterator found = myMap.find(target - nums[i]);
//			if (found != myMap.end()) {
//				result.push_back(found->second);
//				result.push_back(i);
//				cout << found->first << " " << found->second << endl;
//
//				return result;
//			}
//			else {
//				myMap[nums[i]] = i;
//			}
//		}
//		return result;
//	}
//};
//
//int main() {
//	Solution s1 = Solution();
//	vector<int> abc;
//	abc.push_back(2);
//	abc.push_back(7);
//	abc.push_back(11);
//	abc.push_back(15);
//
//	s1.twoSum(abc, 9);
//	return 0;
//}
//
////class Solution {
////public:
////	vector<int> twoSum(vector<int>& nums, int target) {
////		vector<int> output;
////		for (int i = 0; i < nums.size()-1; i++) {
////			for (int j = i+1; j < nums.size(); j++) {
////				if (nums[i] + nums[j] == target) {
////					output.push_back(i);
////					output.push_back(j);
////					return output;
////				}
////			}
////		}
////	}
////};
//
//
//
