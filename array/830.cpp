#include<iostream>
#include<vector>
#include<map>
using namespace std;

/*
	题目：找到字符串内所有连续子符串（连续字串长度至少是3）的起始和终止位置
*/
vector<vector<int>> largeGroupPositions(string S) {
	vector<vector<int>> result;
	map<char, int> mark;
	int sub_sum = 0;
	for (int i = 0; i < S.size() - 1; i++) {
		if (S[i] == S[i + 1])
			sub_sum++;
		else {
			if (sub_sum >= 3) {
				mark.insert(std::pair<char, int>(S[i], sub_sum));
				sub_sum = 0;
			}
		}
	}

	for()
	return result;
}

int main() {
	string S = "abbxxxxzyy";
	vector<vector<int>> result = largeGroupPositions(S);
	for (auto w : result)
		for (auto v : w)
			cout << v << " ";
	return 0;
}