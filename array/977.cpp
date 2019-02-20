#include<iostream>
#include<vector>
using namespace std;

/*
    先计算幂，然后排序
*/
vector<int> sortedSquares(vector<int>& A) {
     for(int i = 0; i < A.size(); ++i)
        A[i] = A[i]*A[i];

     for(int i = 0;i < A.size(); ++i){
        for(int j = i + 1; j < A.size(); ++j){
            if(A[j] < A[i]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
     }
     return A;
}

int main(){
    //vector<int> A = {-4,-1,0,3,10};
    vector<int> A = {-7,-3,2,3,11};
    vector<int> R = sortedSquares(A);
    for(auto w : R)
        cout << w << " ";
    return 0;
}
