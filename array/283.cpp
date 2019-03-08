#include<iostream>
#include<vector>
#include<queue>
using namespace std;

/**
    idea:将不为0的数放入一个队列Q中，同时统计0的个数nums_zero，
    然后再将Q中的元素依次赋给nums，赋值结束后再末尾，添加相应的ums_zero个0。
    （也可以不用队列，把不为0的元素放入新的初始化为0的数组中）
*/
vector<int> moveZeroes(vector<int>& nums) {
    queue<int> Q;
    int nums_zero = 0;
    for(int i = 0; i < nums.size(); i++)
        if(nums[i])
            Q.push(nums[i]);
        else
            nums_zero++;
    int i = 0;
    while(!Q.empty()){
        nums[i++] = Q.front();
        Q.pop();
    }
     while(nums_zero > 0){
        nums[i++] = 0;
        nums_zero--;
     }
     return nums;
}

vector<int> moveZeroes2(vector<int>& nums) {
        vector<int> result(nums.size(),0);
        int k = 0;
        for(int i = 0; i < nums.size(); i++)
            if( nums[i] !=0)
                result[k++] = nums[i];
        return result;
}

int main(){
    vector<int> nums = {0,1,0,3,12};
     /*
    vector<int> result = moveZeroes(nums);
    for(auto w:result)
        cout << w << " ";

    cout << endl;
    */

    vector<int> result2 = moveZeroes2(nums);
    for(auto w:result2)
        cout << w << " ";
    return 0;
}
