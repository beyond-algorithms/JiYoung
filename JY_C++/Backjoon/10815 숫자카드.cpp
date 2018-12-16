//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <math.h>
//#include <string>
//using namespace std;
//
//int myCardNum, cardNum;
//vector<int> cardCorpus;
//vector<int> compareCard;
//void makeInput() {
//	cin >> myCardNum;
//	int temp;
//	for (int i = 0; i < myCardNum; i++) {
//		cin >> temp;
//		cardCorpus.push_back(temp);
//	}
//	cin >> cardNum;
//	for (int i = 0; i < cardNum; i++) {
//		cin >> temp;
//		compareCard.push_back(temp);
//	}
//}
//
//int main() {
//	makeInput();
//	sort(cardCorpus.begin(), cardCorpus.end());
//	string answer = "";
//	int idx, flag;
//	for (int i = 0; i < cardNum; i++) {
//		flag = 1;
//		idx = myCardNum / 2;
//
//		for (int j = 0; j < log2(myCardNum); j++) {
//			if (cardCorpus[idx] == compareCard[i] || cardCorpus[myCardNum-1] == compareCard[i] || cardCorpus[0] == compareCard[i]) {
//				answer += "1 ";
//				flag = 0;
//				break;
//			}
//			if (cardCorpus[idx] > compareCard[i]) {
//				idx -= idx / 2;
//			}
//			else {
//				idx += idx / 2;
//			}
//		}
//		if (flag) answer += "0 ";
//	}
//
//	cout << answer;
//}