#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

int rows, cols;
vector<pair<int, int> > location;
bool ** castle;
void makeInput() {
	cin >> rows >> cols;
	castle = new bool*[rows];
	for (int i = 0; i < rows; i++) {
		castle[i] = new bool[cols];
		//memset(castle[i], 0, sizeof(bool)*cols);
	}
	string line = "";
	for (int i = 0; i < rows; i++) {
		cin >> line;
		for (int j = 0; j < cols; j++) {
			if (line.at(j) == 'X') {
				castle[i][j] = true;
			}
		}
	}
}

int main() {

	makeInput();

	unordered_set<int> yetPoliceRows;
	unordered_set<int> yetPoliceCols;

	for (int i = 0; i < rows; i++) {
		yetPoliceRows.insert(i+1);
	}
	for (int i = 0; i < cols; i++) {
		yetPoliceCols.insert(i + 1);
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (castle[i][j] == true) {
				yetPoliceRows.erase(i + 1);
				yetPoliceCols.erase(j + 1);
			}
		}
	}

	cout << max(yetPoliceCols.size(), yetPoliceRows.size());

	return 0;
}