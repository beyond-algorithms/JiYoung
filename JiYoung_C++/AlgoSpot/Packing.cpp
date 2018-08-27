//#include <cstdio>
//#include <cstdlib>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <utility>
//#include <iostream>
//using namespace std;
//
//int n, capacity;
//int volume[100], need[100];
//int cache[1001][100];
//string name[100];
//
//int pack(int capacity, int item) {
//	if (item == n) return 0;
//	int& ret = cache[capacity][item];
//	if (ret != -1) return ret;
//
//	ret = pack(capacity, item + 1);
//	if (capacity >= volume[item])
//		ret = max(ret, pack(capacity - volume[item], item + 1) + need[item]);
//
//	return ret;
//}
//
//void reconstruct(int capacity, int item, vector<string>& picked) {
//	if (item == n) return;
//	if (pack(capacity, item) == pack(capacity, item + 1)) {
//		reconstruct(capacity, item + 1, picked);
//	}
//	else {
//		picked.push_back(name[item]);
//		reconstruct(capacity - volume[item], item + 1, picked);
//	}
//}
//
///*입력의 첫 줄에는 테스트 케이스의 수 C(1≤C≤50)가 주어집니다.
//각 테스트 케이스의 첫 줄에는 가져가고 싶은 물건의 수 N(1≤N≤100)과 
//캐리어의 용량 W(1≤W≤1000)가 주어집니다.
//그 이후 N줄에 순서대로 각 물건의 정보가 주어집니다.
//한 물건에 대한 정보는 물건의 이름, 부피, 절박도 순서대로 주어지며,
//이름은 공백 없는 알파벳 대소문자 1글자 이상 20글자 이하의 문자열, 
//부피와 절박도는 1000 이하의 자연수입니다.
//*/
//
////int main() {
////	int repeat = 0;
////	cin >> repeat;
////	
////
////	for (int z = 0; z < repeat; z++) {
////		cin >> n >> capacity;
////
////		for (int i = 0; i < n; i++) {
////			scanf("%s %d %d", &name[i], &volume[i], &need[i]);
////			cin >> name[0] >> volume[i] >> need[i];
////
////		}
////		
////		vector<string> storeName;
////		reconstruct(capacity, 0, storeName);
////		vector<string>::iterator it;
////		for (int t = 0; t < storeName.size(); ++t) {
////			printf("%s\n", storeName.at(t));
////		}
////	}
////	return 0;
////}
//
//
//
//
//
//
//
////int repeat = 0;
////scanf("%d", &repeat);
////
////
////for (int z = 0; z < repeat; z++) {
////	scanf("%d %d", &n, &capacity);
////
////
////	for (int i = 0; i < n; i++) {
////		scanf("%s %d %d", &name[i], &volume[i], &need[i]);
////	}
////
////	vector<string> storeName;
////	reconstruct(capacity, 0, storeName);
////	vector<string>::iterator it;
////	for (int t = 0; t < storeName.size(); ++t) {
////		printf("%s\n", storeName.at(t));
////	}
////}
////return 0;