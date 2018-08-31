#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
	queue<TreeNode*> myTree;
public:
	int findBottomLeftValue(TreeNode* root) {
		if (!root) {
			myTree.push(root);
		}

	}
	int recursive(queue<TreeNode*> Q) {
		
	}
};