#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
private:
	int findValue;
public:
	int search(vector<int>& nums, int target) {
		if (nums.size() == 0) {
			return -1;
		}
		findValue = target;
		return recursive(nums, 0, nums.size() - 1, nums.size() / 2);
	}

	int recursive(vector<int>& list, int first, int end, int pivot) {
		if (list[first] == findValue) {
			return first;
		}
		if (list[end] == findValue) {
			return end;
		}
		if (list[pivot] == findValue) {
			return pivot;
		}
		if (pivot == first || pivot == end) {
			return -1;
		}
		cout << first << " " << end << " " << pivot << endl;
		int left, right, mid;

		if (findValue > pivot) {
			if (findValue < end) {
				left = pivot+1;
				right = end;
			}
		}
		else if (findValue < pivot) {
			if (findValue < end) {
				left = pivot+1;
				right = end;
			}
			else if (findValue > first) {
				left = first;
				right = pivot-1;
			}
		}

		mid = (left + right) / 2;
		return recursive(list, left, right, mid);
	}
};

int main() {
	Solution s1 = Solution();
	vector<int> a = { 4,5,6,7,0,1,2 };
	vector<int> b = {202,206,207,208,209,214,215,216,217,219,
		223,226,229,232,233,235,238,242,252,253,
		254,255,258,259,264,265,266,267,269,271,
		272,274,276,277,279,281,282,286,289,298,
		7,14,15,17,18,25,26,27,29,30,
		36,38,39,41,43,47,49,50,51,52,
		55,56,57,59,61,64,65,66,68,69,
		70,79,80,82,83,89,96,97,100,101,106,112,115,116,119,120,121,124,126,130,132,138,144,149,150,153,154,157,161,162,168,170,173,176,179,183,184,186,188,195,201};
	cout<< s1.search(b,55);

	return 0;
}