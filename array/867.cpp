#include<iostream>
#include<vector>
using namespace std;

/**
    矩阵的转置
    申请一个新的二维数组R，R的行数 = A的列数，R的列数 = A的行数，然后复制：R[i][j] = A[j][i]
*/
vector<vector<int>> transpose(vector<vector<int>>& A) {
    vector<vector<int>> R(A[0].size(),vector<int> (A.size(),0));
    for(int i = 0; i < R.size(); ++i)
        for(int j = 0; j < R[0].size();++j)
            R[i][j] = A[j][i];
    return R;
}

void printMatrix(vector<vector<int>> A){
     for(int i = 0; i < A.size(); ++i){
        for(int j = 0; j < A[0].size();++j){
                cout << A[i][j] << " ";
        }
        cout << endl;
     }
}

int main(){
    vector<vector<int>> A = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> B = {{1,2,3},{4,5,6}};

    vector<vector<int>> R = transpose(A);
    vector<vector<int>> R2 = transpose(B);

    printMatrix(R);
    printMatrix(R2);

    return 0;

}
