#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


/**
    假设A给出X，获得Y，则sumA - x + y = sumB + x - y;
    推得 y = x + (sumB - sumA) / 2;
    可以引入set，或者统计的方法降低事件复杂度
*/
int sum(vector<int> A){
    int t = 0;
    for(int i = 0; i < A.size(); i++)
        t += A[i];
    return t;
}
vector<int> fairCandySwap(vector<int>& A,vector<int>& B){
        vector<int> result(2,0);
        int sigma  = (sum(B) - sum(A))/2;
        for(int i = 0; i < A.size();i++){
            for(int j = 0; j < B.size(); j++){
                if(B[j] - A[i] == sigma){
                    result[0] = A[i];
                    result[1] = B[j];
                }
            }
        }
        return result;
}

int main(){
    vector<int> A1 = {1,1};
    vector<int> B1 = {2,2};
    vector<int> R1 = fairCandySwap(A1,B1);
    for(auto w : R1)
        cout << w << " ";
    cout << endl;

    vector<int> A2 = {1,2};
    vector<int> B2 = {2,3};
    vector<int> R2 = fairCandySwap(A2,B2);
    for(auto w : R2)
        cout << w << " ";
    cout << endl;

    vector<int> A3 = {2};
    vector<int> B3 = {1,3};
    vector<int> R3 = fairCandySwap(A3,B3);
    for(auto w : R3)
        cout << w << " ";
    cout << endl;

    vector<int> A4 = {1,2,5};
    vector<int> B4 = {2,4};
    vector<int> R4 = fairCandySwap(A4,B4);
    for(auto w : R4)
        cout << w << " ";
    cout << endl;
    return 0;
}
