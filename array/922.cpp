#include<iostream>
#include<vector>
using namespace std;

/**
    ����˼·����A�е�ż���������ֱ����B��C��,
    Ȼ����A�а�˳�����һ��B��Ԫ�أ��ٲ���һ��C�е�Ԫ��
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
