#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int solution(vector<int> food_times, long long k) {
	unordered_map<int, int> freq;
	for (int food : food_times) {
		freq[food]++;
	}

	vector<int> acc(freq.size(), 0);
	for (int i = 1; i < acc.size(); i++) {
		acc[i] = acc[i - 1] + freq[i];
	}

	int idx = 0;
	int remain = 0;
	int timeacc = 0;
	for (int i = 0; i < acc.size(); i++) {
		timeacc += acc[i];
		if (k - (food_times.size() * (i + 1) - timeacc) < 0) {
			idx = i;
			remain = k - (food_times.size() * (i+1) - (timeacc - acc[i]));
			break;
		}
	}
	cout << idx << endl;
	cout << remain << endl;

	for (int i = 0; i < food_times.size(); i++) {
		if (remain == 0) {
			int inner = i;
			while (food_times[inner] == 0) {
				inner++;
			}
			return inner;
		}
		remain--;

		if (food_times[i] <= idx) continue;
	}

	return -1;
}