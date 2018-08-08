//#include <iostream>
//#include <string>
//using namespace std;
//
//
//int calSub(int n) {
//	int trash = n % 10;
//	int nextTrash = (n / 10) % 10;
//	return trash - nextTrash;
//}
//
//int main() {
//	int n;
//	cin >> n;
//
//	if (n < 100) {
//		cout << n << endl;
//		return 0;
//	}
//	else if (n <= 110) {
//		cout << 99 << endl;
//		return 0;
//	}
//
//	int output = 99;
//	for (int i = 111; i <= n; i++) {
//		int temp = 0;
//		int flag = 0;
//		int tempSub = 0;
//
//		int sub = calSub(i); 
//		int trash = i % 10;
//		int num = i / 10;
//		while (num>0){
//			temp = num % 10; 
//			num /= 10; 
//			tempSub = trash - temp;
//			if (sub != tempSub) {
//				flag = 1;
//				break;
//			}
//			trash = temp;
//		}
//		if (flag == 0) {
//			output++;
//		}
//	}
//	cout << output << endl;
//
//	return 0;
//}
