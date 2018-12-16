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
//			if (notGroup.find(str) == notGroup.end()) { //그룹이다.
//				if (group.find(str) == group.end()) { //한번도 본적없다.
//					group.insert(str);
//					lastchar = str;
//				}
//				else { //그룹이라고 가정했지만 이전에 똑같은친구였는지 검사해봐야한다.
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