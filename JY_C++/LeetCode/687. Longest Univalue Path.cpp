//#include <cstdio>
//#include <cstdlib>
//#include <algorithm>
//
//using namespace std;
////Definition for a binary tree node.
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//private:
//	int answer = 0;
//public:
//	int longestUnivaluePath(TreeNode* root) {
//		recursive(root);
//		return answer;
//	}
//
//	int recursive(TreeNode* node) {
//		if (node == NULL) {
//			return 0;
//		}
//		int left_length = recursive(node->left);
//		int right_length = recursive(node->right);
//
//		int left = 0, right = 0;
//
//		if (node->left != NULL && (node->val == node->left->val)) {
//			left = left_length + 1;
//		}
//		if (node->right != NULL && (node->val == node->right->val)) {
//			right = right_length + 1;
//		}
//
//		answer = max(answer, left + right);
//		return max(left, right);
//	}
//};
//
//
//
//
////class Solution {
////public:
////	int longestUnivaluePath(TreeNode *root) {
////		LongestRootToLeave(root);
////		return res_;
////	}
////
////private:
////	int LongestRootToLeave(TreeNode *root) {
////		if (!root) {
////			return 0;
////		}
////		int left = LongestRootToLeave(root->left),
////			right = LongestRootToLeave(root->right);
////		int longest_root_path = 1;
////		int res = 0;
////		if (root->left && root->left->val == root->val) {
////			longest_root_path += left;
////			res += left;
////		}
////		if (root->right && root->right->val == root->val) {
////			longest_root_path = max(longest_root_path, 1 + right);
////			res += right;
////		}
////		res_ = max(res_, res);
////		return longest_root_path;
////	}
////
////	int res_ = 0;
////};
//
//
////static int x = []() {
////	std::ios::sync_with_stdio(false);
////	cin.tie(NULL);
////	return 0;
////}();