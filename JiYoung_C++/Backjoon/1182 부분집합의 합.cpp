//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//#include <cstdio>
//#include <set>
//using namespace std;
//
///*ù° �ٿ� ������ ������ ��Ÿ���� N�� ���� S�� �־�����. (1��N��20, |S|��1,000,000) ��° �ٿ� N���� ������ �� ĭ�� ���̿� �ΰ� �־�����.
//�־����� ������ ���밪�� 100,000�� ���� �ʴ´�. ���� ���� ������ �־��� ���� �ִ�.*/
//
//set<vector<int> > checked;
//int Sum, N;
//int recursive(vector<int>& list) {
//	if (list.size() == 0) {
//		return 0;
//	}
//	set<vector<int> >::iterator itr;
//	itr = checked.find(list);
//	if (itr != checked.end()) {
//		return 0;
//	}
//	int partialSum = 0;
//	int ret = 0;
//	for (int i = 0; i < list.size(); i++) {
//		partialSum += list[i];
//	}
//	if (partialSum == Sum) {
//		ret++;
//	}
//	for (int i = 0; i < list.size(); i++) {
//		vector<int> temp(list);
//		temp.erase(temp.begin() + i);
//		ret += recursive(temp);
//	}
//	checked.insert(list);
//
//	return ret;
//}
//
//int main() {
//	cin >> N >> Sum;
//
//	vector<int> nums;
//	int input = 0;
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &input);
//		nums.push_back(input);
//	}
//	int output = recursive(nums);
//	printf("%d\n", output);
//	return 0;
//}
//
//
//
///*
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N, S, ans = 0;
//vector<int> arr;
//
//// cnt: �迭�� �ε���, sum: ��, length: �κ������� ����
//int dfs(int cnt, int sum, int length) {
//// �Էµ� ������ ��� Ȱ��
//if(cnt == N) {
//// �κ������� ���� �Է°� ���� �������� �ƴ� ���
//if(sum == S && length != 0) {
//ans ++;
//}
//return 0;
//}
//
//// ������ �κ��������� ����
//dfs(cnt + 1, sum + arr[cnt], length + 1);
//// ������ �κ��������� �������� ����
//dfs(cnt + 1, sum, length);
//return 0;
//}
//
//int main() {
//
//cin >> N >> S;
//
//for(int i = 0; i < N; i ++) {
//int temp;
//cin >> temp;
//arr.push_back(temp);
//}
//
//dfs(0, 0, 0);
//
//cout << ans;
//return 0;
//}
//*/