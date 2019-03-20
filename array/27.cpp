#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    vector<int>::iterator it = nums.begin();
    while(it != nums.end()){
        if((*it) == val){
            nums.erase(it);
        }
        it++;
    }
    return int(nums.size());
}

int main(){
    vector<int> nums = {3,2,2,3};
    int len = removeElement(nums,3);
    cout << len << endl;
    return 0;
}
