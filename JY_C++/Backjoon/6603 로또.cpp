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
//	if (depth == 6) {                    //Ż������
//		for (int i = 0; i<6; i++) {
//			cout << combi[i] << ' ';    //�����ϳ��� ����� �� Ż��
//		}
//		cout << '\n';
//		return;
//	}
//
//	for (int i = start; i<input; i++) {    //lotto�迭 0���� k-1���� Ž����     
//		combi[depth] = lotto[i];    //depth�� ���� -> 0~5��° ���̱��� ��͸����� ���� Ž���� ���ڸ� ����.    
//		dfs(i + 1, depth + 1);            //��� ���� �κ� , �ϳ��� ���̸� Ž�� �� ���������� ���� �Լ�ȣ���Ҷ��� ����+1�� �������.
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