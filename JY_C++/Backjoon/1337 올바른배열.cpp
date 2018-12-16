//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <math.h>
//using namespace std;
//
//int arrSize;
//vector<int> numbers;
//void makeInput() {
//	cin >> arrSize;
//	int nums;
//	for (int i = 0; i < arrSize; i++) {
//		cin >> nums;
//		numbers.push_back(nums);
//	}
//}
//
//int main() {
//	makeInput();
//
//	sort(numbers.begin(), numbers.end());
//
//	int maxCount = 5;
//	int Count = 4;
//	int nextIndex;
//
//	int until = (arrSize < 5) ? 1 : arrSize - 5;
//	for (int i = 0; i < until; i++) {
//		Count = 4;
//		nextIndex = 1;
//		
//		
//		for (int j = 0; j < min(5,arrSize); j++) {
//			if (numbers[i] + j + 1 == numbers[i + nextIndex]) {
//				if(nextIndex <numbers.size())
//					nextIndex++;
//				Count--;
//			}
//		}
//		if (maxCount > Count) {
//			maxCount = Count;
//		}
//	}
//	cout << maxCount;
//
//	return 0;
//}