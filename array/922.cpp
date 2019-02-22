#include<iostream>
#include<vector>
using namespace std;

/**
    解题思路：把A中的偶数和奇数分别存在B，C中,
    然后再A中按顺序插入一个B的元素，再插入一个C中的元素
*/
vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> even,odd,R;
        for(int i = 0; i < A.size(); ++i){
            if(A[i] % 2 == 0)
                even.push_back(A[i]);
            else
                odd.push_back(A[i]);
        }
        for(int i = 0; i < even.size(); ++i){
            R.push_back(even[i]);
            R.push_back(odd[i]);
        }
        return R;
}
int main(){
    vector<int> A = {4,2,5,7};
    vector<int> R = sortArrayByParityII(A);
     for(auto w : R)
        cout << w << " ";
    return 0;
}
