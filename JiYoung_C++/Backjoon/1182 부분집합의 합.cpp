//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//#include <cstdio>
//#include <set>
//using namespace std;
//
///*첫째 줄에 정수의 개수를 나타내는 N과 정수 S가 주어진다. (1≤N≤20, |S|≤1,000,000) 둘째 줄에 N개의 정수가 빈 칸을 사이에 두고 주어진다.
//주어지는 정수의 절대값은 100,000을 넘지 않는다. 같은 수가 여러번 주어질 수도 있다.*/
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
//// cnt: 배열의 인덱스, sum: 합, length: 부분집합의 길이
//int dfs(int cnt, int sum, int length) {
//// 입력된 정수를 모두 활용
//if(cnt == N) {
//// 부분집합의 합이 입력과 같고 공집합이 아닐 경우
//if(sum == S && length != 0) {
//ans ++;
//}
//return 0;
//}
//
//// 정수를 부분집합으로 선택
//dfs(cnt + 1, sum + arr[cnt], length + 1);
//// 정수를 부분집합으로 선택하지 않음
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