//#include <queue>
//#include <algorithm>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//struct CompareIndex {
//	bool operator()(pair<int, int> n1, pair<int, int> n2) {
//		return n1.first < n2.first;
//	}
//};
//
//
//
//
//
//
//
//
//int main() {
//
//	priority_queue<pair<int, int>, vector<pair<int,int>>, CompareIndex> pq;
//	vector<pair<int, int> > sortlist_index(8);
//
//	for (int i = 0; i < 8; i++) {
//		int input;
//		scanf("%d", &input);
//		pair<int, int> temp;
//		temp = make_pair(input, i + 1);
//		pq.push(temp);
//	}
//
//	vector<int> five;
//
//	int output = 0;
//	for (int i = 0; i < 5; i++) {
//		pair<int, int> first(pq.top());
//		output += first.first;
//		five.push_back(first.second);
//		pq.pop();
//	}
//	
//	sort(five.begin(), five.end());
//
//
//	printf("%d\n", output);
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", five[i]);
//	}
//	printf("\n");
//	return 0;
//}