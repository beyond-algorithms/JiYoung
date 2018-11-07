//#include <string>
//#include <vector>
//#include <queue>
//#include <iostream>
//using namespace std;
//
//int solution(vector<int> scoville, int K) {
//	int answer = 0;
//	
//	if (scoville.size() == 1) {
//		if (scoville[0] < K) return -1;
//		else return 0;
//	}
//
//	priority_queue<int, vector<int>, greater<int> > pq;
//	for (int i = 0; i < scoville.size(); i++) {
//		pq.push(scoville.at(i));
//	}
//
//
//	int first = 0;
//	int second = 0;
//	int summation = 0;
//	while (1) {
//		first = pq.top();
//		pq.pop();
//		second = pq.top();
//		if (first >= K) {
//			break;
//		}
//		if (pq.size() == 0 && first < K) {
//			return -1;
//		}
//		pq.pop();
//		summation = first + second * 2;
//		answer++;
//		pq.push(summation);
//	}
//
//
//	return answer;
//}