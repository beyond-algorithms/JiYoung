#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <utility>


using namespace std;
struct compare {
	bool operator()(pair<int, int> a , pair<int, int> b) {
		if (a.second < b.second) return true;
		return false;
	}
};

int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
	int answer = 0;
	int rest = stock;
	int need = k - stock;
	priority_queue<pair<int,int>, vector<pair<int, int> >, compare > pq;
	for (int i = 0; i < dates.size(); i++) {
		pq.push(pair<int, int>(dates[i], supplies[i]));//날짜와 공급량을 pair 롤 저장
	}

	while (need>0 && !pq.empty()) {
		pair<int, int> top = pq.top();
		
		cout << top.first <<" 일 후 "<< top.second << endl;
		cout << need << "필요해" << endl;
		if (top.first > stock) {
			pq.pop();	
			continue;
		}
		need -= top.second;
		rest += top.second;
		answer++;
		pq.pop();

		
	}

	return answer;
}

int main() {
	vector<int> a = { 4,10,15 };
	vector<int> b = { 20,5,10 };
	cout << solution(4, a, b, 30)  << endl;
	return 0;
}