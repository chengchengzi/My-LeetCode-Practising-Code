#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    int N = nums.size();
    vector<int> result;
    vector<int>::iterator it = nums.begin();
    if(it == nums.end()){
        return result;
    }
    else{
        sort(nums.begin(),nums.end());
        while(it != nums.end()-1){
            if(*it == *(it + 1))
                it = nums.erase(it);
            else
                it++;
        }
        if(nums.size() == N && nums[nums.size()-1] == N){
            return result;
        }
        else if(nums.size() < N && nums[nums.size()-1] == nums.size()){
            result.push_back(nums.size() + 1);
            return result;
        }
        else{
            int j = 0;
            for(int i = 1; i <= N;i++){
                if(j < nums.size() && i != nums[j++])
                    result.push_back(i);
            }
        }
    }
    return result;
}

int main(){

    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> result = findDisappearedNumbers(nums);
    for(auto w : result)
        cout << w << " ";
    cout << endl;

    vector<int> nums1 = {};
    vector<int> result1 = findDisappearedNumbers(nums1);
    for(auto w : result1)
        cout << w << " ";
    cout << endl;

    vector<int> nums2 = {1,1};
    vector<int> result2 = findDisappearedNumbers(nums2);
    for(auto w : result2)
        cout << w << " ";
    cout << endl;

    vector<int> nums3 = {1,2};
    vector<int> result3 = findDisappearedNumbers(nums3);
    for(auto w : result3)
        cout << w << " ";
    return 0;
}
