// leetcodeOnVS.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<vector>
#include<string>
#include<iostream>
using namespace std;

vector<char> commonChars(vector<string>& A) {
	vector<char> re;
	vector<char> temp_A;
	vector<int> count(26,0);

	for (int i = 0; i < A.size(); i++)
		for (int j = 0; j < A[0].size(); j++)
			temp_A.push_back(A[i][j]);

	//统计排序
	for (int i = 0; i < temp_A.size(); i++) {
		count[temp_A[i] - 'a']++;
	}

	for (int i = 0; i < count.size(); i++) {
		if (count[i]) {
			if (count[i] % 3 == 0 && count[i] % 4 != 0) {
				int k = count[i] / 3;
				for (int i = 0; i < k; i++) {
					char c = count[i] + 96;
					re.push_back(c);
				}
			}
		}
	}

	for (auto w : count)
		cout << w << endl;
	return re;
}
int main()
{
	vector<string> A = {"bella","label","roller"};
	//vector<string> A = { "abc" };
	vector<char> re = commonChars(A);
	for (auto w : re)
		cout << w << " ";
	return 0;
}



