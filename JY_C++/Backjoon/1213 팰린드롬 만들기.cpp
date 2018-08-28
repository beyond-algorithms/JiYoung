
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <string>
//#include <vector>
//using namespace std;
//string name;
//int sizen;
//int allsearch() {
//	int flag = 0;
//	int indexbegin = 0, indexend = sizen - 1;
//
//	do {
//		flag = 0;
//		indexbegin = 0, indexend = sizen - 1;
//		for (int i = 0; i < sizen / 2; i++) {
//			if (name[indexbegin] != name[indexend]) {
//				flag = 1;
//				break;
//			}
//			indexbegin++;
//			indexend--;
//		}
//		if (flag == 0) {
//			for (int i = 0; i < sizen; i++) {
//				printf("%c", name[i]);
//			}
//			printf("\n");
//			return 1;
//		}
//	} while (next_permutation(name.begin(), name.end()));
//	return 0;
//}
//
//
//
//int main() {
//	cin >> name;
//	sizen = name.size();
//	if (!allsearch()) {
//		cout << "i'm sorry hansoo" << endl;
//	}
//	return 0;
//}
//
