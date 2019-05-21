#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> vec_nums_count(nums.size()+1,0);
        vector<int> re;

        for(int i = 0; i < nums.size();i++)
            vec_nums_count[nums[i]]++;

        for(int i = 1; i < vec_nums_count.size();i++)
            if(vec_nums_count[i] == 0)
                re.push_back(i);
         return re;
    }

int main(){

    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> result = findDisappearedNumbers(nums);
    for(auto w : result)
        cout << w << " ";
    cout << endl;

    vector<int> nums2 = {1,1};
    vector<int> result2 = findDisappearedNumbers(nums2);
    for(auto w : result2)
        cout << w << " ";
    cout << endl;


    return 0;
}
