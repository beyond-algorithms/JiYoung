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
///*�Է��� ù �ٿ��� �׽�Ʈ ���̽��� �� C(1��C��50)�� �־����ϴ�.
//�� �׽�Ʈ ���̽��� ù �ٿ��� �������� ���� ������ �� N(1��N��100)�� 
//ĳ������ �뷮 W(1��W��1000)�� �־����ϴ�.
//�� ���� N�ٿ� ������� �� ������ ������ �־����ϴ�.
//�� ���ǿ� ���� ������ ������ �̸�, ����, ���ڵ� ������� �־�����,
//�̸��� ���� ���� ���ĺ� ��ҹ��� 1���� �̻� 20���� ������ ���ڿ�, 
//���ǿ� ���ڵ��� 1000 ������ �ڿ����Դϴ�.
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