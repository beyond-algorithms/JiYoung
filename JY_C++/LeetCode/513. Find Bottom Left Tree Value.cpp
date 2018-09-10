//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
////Given a binary tree, find the leftmost value in the last row of the tree.
////Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
///*
//	���� �ٰ��ٰ� �ƽ������� ��� ����ϰ�
//	���������� ���� ������ ��� ����ϸ����?
//*/
//class Solution {
//private:
//	int maxDepth;
//	int maxValue;
//public:
//	int findBottomLeftValue(TreeNode* root) {
//		maxDepth = 0;
//		maxValue = root->val;
//		recursive(root, 0);
//		return maxValue;
//	}
//	void recursive(TreeNode* node, int depth) {
//		if (!node) {
//			return;
//		}
//		
//		if (depth > maxDepth) {
//			maxDepth = depth;
//			maxValue = node->val;
//		}
//
//		recursive(node->left, depth + 1);
//		recursive(node->right, depth + 1);
//
//	}
//};