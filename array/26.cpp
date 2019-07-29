#include<iostream>
#include<vector>
using namespace std;

//O(n)
int removeDuplicates(vector<int>& nums) {

        if(nums.size() <= 0)
            return 0;
        if(nums.size() == 1)
            return nums.size();
        int k = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i - 1])
                k++;
            else
                nums[i - k] = nums[i];
        }
        nums.resize(nums.size() - k);
        return (nums.size());
}

int main(){
    vector<int> nums1 = {1,1,2};
    vector<int> nums2 = {0,0,1,1,1,2,2,3,3,4};
    cout << "nums1: " << removeDuplicates(nums1)  << endl;
    cout << "nums2: " << removeDuplicates(nums2)  << endl;
    return 0;
}
