//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstdio>
//using namespace std;
//
///*첫 줄에 test case의 수가 주어진다. 
//각 test case에 대해서 문서의 수 N(100이하)와 몇 번째로 인쇄되었는지 궁금한 문서가 현재 Queue의 어떤 위치에 있는지를 알려주는 M(0이상 N미만)이 주어진다
//다음줄에 N개 문서의 중요도가 주어지는데, 중요도는 적절한 범위의 int형으로 주어진다. 
//중요도가 같은 문서가 여러 개 있을 수도 있다. 위의 예는 N=4, M=0(A문서가 궁금하다면), 중요도는 2 1 4 3이 된다.*/
//
//struct compare {
//	bool operator()(pair<int, int> n1, pair<int, int> n2){
//		return n1.second < n2.second;
//	}
//};
//int main() {
//	int testcase;
//	cin >> testcase;
//
//	for (int x = 0; x < testcase; x++) {
//		int numberOfText, locationOftext; // N, M
//		cin >> numberOfText >> locationOftext;
//		vector<pair<int, int> > myVec;
//		priority_queue<int, vector<int>, less<int> > maxQ;
//		int importance;
//		for (int i = 0; i < numberOfText; i++) {
//			cin >> importance;
//			maxQ.push(importance);
//			pair<int, int> temp = make_pair(i, importance);
//			myVec.push_back(temp);
//		}
//		int output = 1;
//		
//		
//		while (!myVec.empty()) {
//			int maxImportance = maxQ.top(); //현재최고중요도
//
//			auto getPair = myVec[0]; //순서대로 돌것이다
//			if (getPair.second < maxImportance) { //내가찾던 중요도가 아니다
//				myVec.push_back(getPair); //맨뒤에집어넣고
//				myVec.erase(myVec.begin()); //맨앞에거 지우고//다음
//			}
//			else if (getPair.second == maxImportance) { //내가찾던중요도인데
//				if (getPair.first == locationOftext) { //인덱스도 맞다 출력
//					cout << output << endl;
//					break;
//				}
//				else { //중요도는 같은데 인덱스가 다르다
//					maxQ.pop(); //중요도바꿔주고
//					myVec.erase(myVec.begin()); //없애주고
//					output++;
//
//				}
//			}
//		}
//	}
//	return 0;
//}