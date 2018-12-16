//#include <iostream>
//#include <vector>
//
//using namespace std;
//int numOfHouse, wifi;
//
//vector<long long> makeInput() {
//	cin >> numOfHouse >> wifi;
//	vector<long long> location;
//	int input;
//	for (int i = 0; i < numOfHouse; i++) {
//		cin >> input;
//		location.push_back(input);
//	}
//	return location;
//}
//
//int main() {
//	vector<long long> location = makeInput();
//
//	vector<long long> subOfNeighbor;
//
//	for (int i = 1; i < numOfHouse; i++) {
//		subOfNeighbor.push_back((location[i - 1] > location[i]) ? location[i - 1] - location[i] : location[i] - location[i - 1]);
//	}
//
//
//
//	return 0;
//}