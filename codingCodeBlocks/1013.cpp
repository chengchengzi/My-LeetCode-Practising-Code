#include<iostream>
#include<vector>
using namespace std;

int sum(vector<int> nums){
    int  m = 0;
    for(vector<int>::iterator it = nums.begin();it != nums.end(); it++)
        m += *it;
    return m;
}
bool canThreePartsEqualSum(vector<int>& A) {
    vector<int> part0,part1,part2;
    int sum0 = 0;
    int sum1 = 0;
    int sum2 = 0;
    int i = 1;
    int j = 0;
    while(i < A.size() - 1){
        while(j < A.size() / 2 - 1 ){

        }
        i++;
    }

}

int main(){
    vector<int> A = {0,2,1,-6,6,-7,9,1,2,0,1};

    return 0;
}
