//#include <cstdio>
//#include <cstdlib>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//
//
//void testrecursive(vector<int>& test, int count, int index) {
//	test[index] = 100;
//	cout << count << endl;
//	if (count == 2) {
//		test[3] = 9;
//		for (int i = 0; i < test.size(); i++) {
//			cout << test[i] << " ";
//		}
//		cout << "먼저겠지"<<endl;
//		return;
//	}
//
//	testrecursive(test, count + 1, index+1);
//	
//	for (int i = 0; i < test.size(); i++) {
//		cout << test[i] << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//
//	vector<int> testvec;
//	testvec.push_back(2);
//	testvec.push_back(4);
//	testvec.push_back(6);
//	testvec.push_back(8);
//
//
//	testrecursive(testvec, 0, 0);
//	return 0;
//}