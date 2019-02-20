#include<iostream>
#include<vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>& A) {

        vector<int>::iterator i = A.begin();
        for(auto it = A.begin(); it != A.end(); ++it)
            if(*it % 2 == 0){
                int temp = *i;
                *i = *it;
                *it = temp;
                ++i;
            }
        return A;
}

int main(){
    vector<int> A = {3,1,2,4};
    vector<int> R = sortArrayByParity(A);
    for(auto w:R)
        cout << w << " ";
    return 0;
}
