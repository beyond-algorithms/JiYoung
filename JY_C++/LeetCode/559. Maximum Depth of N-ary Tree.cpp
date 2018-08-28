//#include <vector>
//#include <iostream>
//#include <cstdio>
//#include <queue>
//#include <algorithm>
//using namespace std;
//// Definition for a Node.
//class Node {
//public:
//int val;
//vector<Node*> children;
//
//Node() {}
//
//Node(int _val, vector<Node*> _children) {
//val = _val;
//children = _children;
//}
//};
//
//class Solution {
//	queue<Node*> bfs;
//	int maxValue = 0;
//
//public:
//	int maxDepth(Node* root) {
//		if (root == NULL) {
//			return 0;
//		}
//		return recursive(root, 1);
//	}
//	int recursive(Node* root, int depth) {
//		if (root->children.size() == 0) {
//			return depth;
//		}
//		for (auto it = root->children.begin(); it != root->children.end(); it++) {
//			maxValue = max(maxValue, recursive(*it, depth + 1));
//		}
//		return maxValue;
//	}
//
//
//	int BestSolution(Node* root) {
//			if (!root) return 0;
//			int res = 1;
//			for (Node* child : root->children)
//				res = max(res, BestSolution(child) + 1);
//			return res;
//		}
//	};
//
//};