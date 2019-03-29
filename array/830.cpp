#include<iostream>
#include<vector>
#include<map>
using namespace std;

/*
	题目：找到字符串内所有连续子符串的起始和终止位置(连续字串长度至少是3)
*/
vector<vector<int>> largeGroupPositions(string S) {
	int i = 0, j = 0;
	vector<vector<int>> res;
	while (j < S.size() ){
		while (j < S.size() && S[j] == S[i]) ++j;
		if (j - i >= 3)
			res.push_back({ i, j - 1 });
		i = j;
	}
	return res;
}

int main() {
	string S = "abbxxxxzyy";
	string S1 = "abcdddeeeeaabbbcd";
	vector<vector<int>> result = largeGroupPositions(S1);
	for (auto w : result)
		for (auto v : w)
			cout << v << " ";
	return 0;
}