//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstdio>
//using namespace std;
//
///*ù �ٿ� test case�� ���� �־�����. 
//�� test case�� ���ؼ� ������ �� N(100����)�� �� ��°�� �μ�Ǿ����� �ñ��� ������ ���� Queue�� � ��ġ�� �ִ����� �˷��ִ� M(0�̻� N�̸�)�� �־�����
//�����ٿ� N�� ������ �߿䵵�� �־����µ�, �߿䵵�� ������ ������ int������ �־�����. 
//�߿䵵�� ���� ������ ���� �� ���� ���� �ִ�. ���� ���� N=4, M=0(A������ �ñ��ϴٸ�), �߿䵵�� 2 1 4 3�� �ȴ�.*/
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
//			int maxImportance = maxQ.top(); //�����ְ��߿䵵
//
//			auto getPair = myVec[0]; //������� �����̴�
//			if (getPair.second < maxImportance) { //����ã�� �߿䵵�� �ƴϴ�
//				myVec.push_back(getPair); //�ǵڿ�����ְ�
//				myVec.erase(myVec.begin()); //�Ǿտ��� �����//����
//			}
//			else if (getPair.second == maxImportance) { //����ã���߿䵵�ε�
//				if (getPair.first == locationOftext) { //�ε����� �´� ���
//					cout << output << endl;
//					break;
//				}
//				else { //�߿䵵�� ������ �ε����� �ٸ���
//					maxQ.pop(); //�߿䵵�ٲ��ְ�
//					myVec.erase(myVec.begin()); //�����ְ�
//					output++;
//
//				}
//			}
//		}
//	}
//	return 0;
//}