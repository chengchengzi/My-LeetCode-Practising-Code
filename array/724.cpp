#include<iostream>
#include<vector>
using namespace std;

/**
    724£º
*/

int sum(vector<int> nums,int begin,int end){
    int sum = 0;
    for(int i = begin; i <= end; i++)
        sum += nums[i];
    return sum;
}
int pivotIndex(vector<int>& nums) {
        vector<int> temp_result;
        int result = -1;
        if(nums.size() > 0){
            int sum_left = 0;
            int sum_right = 0;
            int pivot = 0;
            for(int i = 0; i < nums.size(); i++){
                sum_left = sum(nums,0,i-1);
                sum_right = sum(nums,i+1, nums.size()-1);
                if(sum_left == sum_right)
                    temp_result.push_back(i);
            }
        }

        if(temp_result.size()>0)
            result = temp_result[0];
        return result;
}


int main(){
    vector<int> nums1 = {-1,-1,-1,0,1,1};
    cout <<  pivotIndex(nums1) << endl;

    vector<int> nums2 = {-1,-1,0,0,-1,-1};
    cout <<  pivotIndex(nums2) << endl;
    return 0;
}
