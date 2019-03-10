#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    for(int i = 0; i < nums.size(); i++)
        for(int j = i + 1; j < nums.size();j++)
            if(nums[i] == nums[j])
                return true;
    return false;
}

int main(){
    //1
    vector<int> nums1 = {1,2,3,1};
    cout << containsDuplicate(nums1) << endl;

    vector<int> nums2 = {1,2,3,4};
    cout << containsDuplicate(nums2) << endl;

    vector<int> nums3 = {1,1,1,3,3,4,3,2,4,2};
    cout << containsDuplicate(nums3) << endl;
    return 0;
}
