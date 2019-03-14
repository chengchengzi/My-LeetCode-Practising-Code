#include<iostream>
#include<vector>
using namespace std;

/**
    idea:利用和对减法
*/
int missingNumber(vector<int>& nums){
    int sum_current = 0;
    int sum_all = 0;

    for(int i = 0 ,j = 1 ; i < nums.size() && j < nums.size();i++,j++){
        sum_current += nums[i];
        sum_all += j;
    }
    return sum_all - sum_current;
}
int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    int result = missingNumber(nums);
    cout << result;

    cout << endl;

    vector<int> nums2 = {3,0,1};
    int result2 = missingNumber(nums2);
    cout << result2;
    return 0;
}
