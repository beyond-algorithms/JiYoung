//#include <iostream>
//#include <vector>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//
//using namespace std;
//
//int vocaCount;
//vector<string> voca;
//void makeInput() {
//	cin >> vocaCount;
//
//	string temp = "";
//	for (int i = 0; i < vocaCount; i++) {
//		temp = "";
//		cin >> temp;
//		voca.push_back(temp);
//	}
//
//}
//int main() {
//	makeInput();
//
//	int answer = 0;
//
//	bool flag = true;
//	for (int i = 0; i < vocaCount; i++) {
//		flag = true;
//		char lastchar;
//		unordered_set<char> notGroup;
//		unordered_set<char> group;
//
//		for (int j = 0; j < voca.at(i).size(); j++) {
//			char str = voca.at(i).at(j);
//
//
//			if (notGroup.size() == 0 && group.size()==0) {
//				group.insert(str);
//				lastchar = str;
//				continue;
//			}
//			if (notGroup.find(str) == notGroup.end()) { //�׷��̴�.
//				if (group.find(str) == group.end()) { //�ѹ��� ��������.
//					group.insert(str);
//					lastchar = str;
//				}
//				else { //�׷��̶�� ���������� ������ �Ȱ���ģ�������� �˻��غ����Ѵ�.
//					if (str != lastchar) {
//						flag = false;
//						break;
//					}
//				}
//			}
//		}
//		if (flag) {
//			answer++;
//		}
//	}
//
//	cout << answer;
//	return 0;
//}