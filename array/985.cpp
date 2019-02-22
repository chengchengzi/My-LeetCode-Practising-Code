#include<iostream>
#include<vector>
using namespace std;

/*
    按照题意把每一个数加到数组上，计算偶数之和即可
*/
vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
    vector<int> R;  //result
    int sum = 0;
    for(int i = 0; i < queries.size(); ++i){
        A[queries[i][1]] = A[queries[i][1]] + queries[i][0];
        for(int j = 0; j < A.size(); ++j){
            if(A[j] % 2 == 0)
                sum += A[j];
        }
        R.push_back(sum);
        sum = 0;
    }
    return R;
}
int main(){
    vector<int> A = {1,2,3,4};
    vector<vector<int>> queries = {{1,0},{-3,1},{-4,0},{2,3}};
    vector<int> R = sumEvenAfterQueries(A,queries);
    for(auto w : R)
        cout << w << " ";
    return 0;
}
