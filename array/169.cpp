#include<iostream>
#include<vector>
using namespace std;

/**
    找数组nums中的主元素，主元素的个数>数组长度一半即为这个数组的主元素
    idea，依次统计nums中每个元素出现的个数
*/
int majorityElement(vector<int>& nums) {
    int count_maj = 0;
    int maj = 0;
    for(int i = 0; i < nums.size(); i++){
        count_maj = 1;
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] == nums[j])
                count_maj++;
        }
        if(count_maj > nums.size()/2)
            maj = nums[i];
    }
    return maj;
}

int main(){
    vector<int> nums = {3,2,3};
    cout << majorityElement(nums) << endl;
    return 0;
}
