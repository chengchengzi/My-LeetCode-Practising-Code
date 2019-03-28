#include<iostream>
#include<vector>
#include<map>
using namespace std;

/*
	��Ŀ���ҵ��ַ��������������ӷ����������ִ�����������3������ʼ����ֹλ��
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