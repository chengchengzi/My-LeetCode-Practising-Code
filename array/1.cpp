#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        //the complexity is n^2
        for(int i = 0; i < nums.size(); ++i){
            for(int j = i + 1; j < nums.size(); ++j){   //j from i +1 to the length of nums
                if(nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
    return result;

}
int main(){
    vector<int> nums={2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums,target);
    for(auto w:result)
        cout << w << " ";
    return 0;
}
