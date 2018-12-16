//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	int pathSum(TreeNode* root, int sum) {
//		if (!root) return 0;
//
//		int ret = 0;
//		vector<int> arrset;
//
//		arrset.push_back(root->val);
//		if (root->val == sum) ret++;
//		ret += recursive(root->left, sum, arrset);
//		ret += recursive(root->right, sum, arrset);
//
//		return ret;
//	}
//
//	int recursive(TreeNode* root, int sum, vector<int> arr) {
//		if (!root) return 0;
//
//		int count = 0;
//		for (int i = 0; i < arr.size(); i++) {
//			if ((arr[i] + root->val) == sum) {
//				count++;
//			}
//			arr[i] += root->val;
//		}
//		if (root->val == sum) count++;
//		arr.push_back(root->val);
//
//		count += recursive(root->left, sum, arr);
//		count += recursive(root->right, sum, arr);
//
//		return count;
//	}
//
//};