#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int max = 0;
    int j = 0;
    for(int i = 0; i < nums.size()/2; i++)
        max += min(nums[j++],nums[j++]);

    return max;
}
int main(){
    //vector<int> nums = {1,4,3,2};
    vector<int> nums = {2469,-4607,4966,1481};
    cout << arrayPairSum(nums) << endl;
    return 0;
}
