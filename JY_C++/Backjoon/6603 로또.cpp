//#include <cstdio>
//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <algorithm>
//
//using namespace std;
//
///*
//7 1 2 3 4 5 6 7
//8 1 2 3 5 8 13 21 34
//0
//*/
//int lotto[13];
//int combi[13];
//int input;
//void dfs(int start, int depth) {
//
//	if (depth == 6) {                    //탈출조건
//		for (int i = 0; i<6; i++) {
//			cout << combi[i] << ' ';    //조합하나를 출력한 뒤 탈출
//		}
//		cout << '\n';
//		return;
//	}
//
//	for (int i = start; i<input; i++) {    //lotto배열 0부터 k-1까지 탐색함     
//		combi[depth] = lotto[i];    //depth는 깊이 -> 0~5번째 깊이까지 재귀를통해 새로 탐색한 숫자를 넣음.    
//		dfs(i + 1, depth + 1);            //재귀 들어가는 부분 , 하나의 깊이를 탐색 후 저장했으니 다음 함수호출할때는 깊이+1을 해줘야함.
//	}
//
//}
//int main() {
//	while (1) {
//		scanf("%d", &input);
//		if (input == 0) {
//			break;
//		}
//		for (int i=0; i<input; i++){
//			scanf("%d", &lotto[i]);
//			
//		}
//		dfs(0, 0);
//	}
//	return 0;
//}