//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//int ans = 987654321;
//string A, B;
//int main() {
//	cin >> A >> B;
//	string x;
//	int output = 0;
//
//	for (int i = 0; i <= B.size() - A.size(); i++) {
//		output = 0;
//		for (int j = 0; j < A.size(); j++) {
//			if (B[j+i] != A[j]) {
//				output++;
//			}
//		}
//		ans = min(ans, output);
//	}
//
//	cout << ans << endl;
//
//	return 0;
//}