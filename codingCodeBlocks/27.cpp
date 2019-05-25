#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    vector<int>::iterator it = nums.begin();
    while(it != nums.end()){
        if(*it == val)
            it = nums.erase(it);
        else
            it++;
    }
    int len = nums.size();
    return len;
}

int main(){

    vector<int> nums = {3,2,2,3};
    int len = removeElement(nums,3);
    cout << len << endl;

    vector<int> nums1 = {0,1,2,2,3,0,4,2};
    int len1 = removeElement(nums1,2);
    cout << len1 << endl;

     return 0;
}
