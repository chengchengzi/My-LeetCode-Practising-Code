#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0;
    for(int i = 0; i < nums.size(); i++){
        if(val == nums[i])
            k++;
        else{
            nums[i - k] = nums[i];
            k = 0;
        }
    }
    int length = nums.size();
    return length;
}

int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int len = removeElement(nums,2);
    cout << len << endl;
    return 0;
}
