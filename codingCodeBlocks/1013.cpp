#include<iostream>
#include<vector>
using namespace std;

bool canThreePartsEqualSum(vector<int>& A) {
        int sum_left = 0;
        int sum_middle = 0;
        int sum_right = 0;
        int sum = 0;

        for(auto it = A.begin(); it != A.end();it++)
            sum += (*it);

        int aver = 0;
        if(sum % 3 == 0)
            aver = sum / 3;
        else
            return false;

        int index_i = 0;
        int index_j = 0;

        for(int i = 0; i < A.size(); i++){
            sum_left += A[i];
            if(sum_left == aver){
                index_i = i;
                break;
            }
        }

        for(int j = A.size() - 1; j > 0; j--){
            sum_right += A[j];
            if(sum_right == aver){
                index_j = j;
                break;
            }

        }

        sum_middle = sum - sum_left - sum_right;

        bool flag1 = false;
        bool flag2 = false;

        if(index_i >= 0 && index_j <= A.size()-1 && index_j > index_i + 1)
            flag1 = true;

        if(sum_middle == aver)
            flag2 = true;

        if(flag1 && flag2)
            return true;

        return false;
}

int main(){
    vector<int> A = {0,2,1,-6,6,-7,9,1,2,0,1}; //1
    vector<int>A2 = {12,-4,16,-5,9,-3,3,8,0};  //1
    cout << canThreePartsEqualSum(A) << endl;
    cout << canThreePartsEqualSum(A2) << endl;
    return 0;
}
