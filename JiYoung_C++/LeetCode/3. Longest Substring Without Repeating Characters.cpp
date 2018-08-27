//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <string>
//
//using namespace std;
//class Solution {
//private:
//	int sizeOfS;
//public:
//	void recursive(string S, int index, vector<string>& output) {
//		string temp = "";
//		for (int i = index; i < sizeOfS; i++) {
//			auto found = temp.find(S[i]);
//			if (found == string::npos) {
//				temp.push_back(S[i]);
//			}
//			else if (found != string::npos) {
//				break;
//			}
//		}
//		output.push_back(temp);
//	}
//	int lengthOfLongestSubstring(string s) {
//		vector<string> output;
//		sizeOfS = s.size();
//		for (int i = 0; i < s.size(); i++) {
//			recursive(s, i, output);
//		}
//		int outputSize = 0;
//		for (int i = 0; i < output.size(); i++) {
//			if (outputSize == 0) { outputSize = output[i].size(); continue; }
//			if (outputSize < output[i].size()) {
//				outputSize = output[i].size();
//			}
//		}
//		return outputSize;
//	}
//};
