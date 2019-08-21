#include<iostream>
#include<vector>
using namespace std;

/**
    724
    题目描述：给定一个整数nums数组，返回此数组的“pivot”下标。
    pivot定义数组的某一个下标值，这个下标左边的数字之和等于下标右边的数字之和。
    如果不存在这样的下标，返回-1。 如果有多个数据透视索引，则应返回最小的下标值。
*/

int sum(vector<int> nums,int begin,int end){
    int sum = 0;
    for(int i = begin; i <= end; i++)
        sum += nums[i];
    return sum;
}

/**
    根据题意求解，每次循环计算下标左边的所有值的和与下标右边所有值的和
    时间复杂度O(n^2)
*/
int pivotIndex(vector<int>& nums) {
        vector<int> temp_result;
        int result = -1;
        if(nums.size() > 0){
            int sum_left = 0;
            int sum_right = 0;
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

/**
    对上一个方法进行了改进，将求和改进为累计求和，
    时间复杂度为O(n)
**/
int pivotIndex2(vector<int>& nums) {
        vector<int> temp_result;
        int result = -1;
        if(nums.size() > 0){
            int sum_left = 0;
            int sum_right = 0;
            int sum = 0;

            //求整个nums的总和
            for(int i = 0; i < nums.size(); i++)
                sum += nums[i];

            for(int i = 0; i < nums.size(); i++){
                if(i != 0)
                    sum_left += nums[i-1];  //累计计算i左边所有值的总和=nums[0]+...+nums[i-1]
                //i右边所有值的总和=整个nums总和-i左边的总和-nums[i]
                sum_right = sum - sum_left - nums[i];
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
    cout <<  pivotIndex2(nums1) << endl;

    vector<int> nums2 = {1,7,3,6,5,6};
    cout <<  pivotIndex2(nums2) << endl;
    return 0;
}
