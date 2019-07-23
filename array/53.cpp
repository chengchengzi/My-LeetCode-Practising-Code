#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1 )
            return nums[0];

        int max_sum = nums[0];
        int temp_sum = 0;
        for(int i = 0; i < nums.size();i++){
            temp_sum += nums[i];
            if(temp_sum >= max_sum)
                max_sum = temp_sum;
            if(temp_sum < 0) temp_sum = 0;
        }
        return max_sum;
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums) << endl;
    return 0;
}
