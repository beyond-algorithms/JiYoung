//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int numOfpeople;
//
//vector<pair<int, int> > body;
//int tall, heavy;
//
//int main() {
//	cin >> numOfpeople;
//	vector<int> rank(numOfpeople, 1);
//	
//	for (int i = 0; i < numOfpeople; i++) {
//		scanf("%d %d", &heavy, &tall);
//		pair<int, int> temp = make_pair(heavy, tall);
//		body.push_back(temp);
//	}
//
//	for (int i = 0; i < numOfpeople; i++) {
//		for (int j = 0; j < numOfpeople; j++) {
//			if (i != j) {
//				if (body[i].first < body[j].first) {
//					if(body[i].second < body[j].second){
//						rank[i] += 1;
//					}
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < rank.size(); i++) {
//		printf("%d\n", rank[i]);
//	}
//	return 0;
//}