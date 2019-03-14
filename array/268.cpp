#include<iostream>
#include<vector>
using namespace std;

/**
    idea:利用和对减法
*/
int missingNumber(vector<int>& nums){
    int nums_max = 0;
    int sum_all = 0;
    int sum_current = 0;

    for(int i = 0 ; i < nums.size();i++){
        sum_current += nums[i];
        if(nums[i] >= nums_max)
            nums_max = nums[i];
    }

    for(int i = 0; i <= nums_max;i++)
        sum_all += i;

    return (sum_all - sum_current);
}
int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    int result = missingNumber(nums);
    cout << result;

     vector<int> nums2 = {3,0,1};
    int result2 = missingNumber(nums2);
    cout << result2;
    return 0;
}
