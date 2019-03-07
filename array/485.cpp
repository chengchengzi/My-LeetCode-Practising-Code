#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/**
    idea:����1,��kͳ�ƣ�����0�ͽ�֮ǰͳ�Ƶ�ֵ����vector�У���������һ����������1�ĸ��������ֵ
*/
int findMaxConsecutiveOnes(vector<int>& nums) {
    vector<int> result;
    int k = 0;
    for(int i = 0;i < nums.size();i++){
        if(nums[i])
            k = k + 1;
        else{
            result.push_back(k);
            k = 0;
        }
    }
    if(k)
        result.push_back(k);

    sort(result.begin(),result.end());

    return *(result.end() - 1);
}
int main(){
    vector<int> nums = {1,1,0,1,1,1};
    int result = findMaxConsecutiveOnes(nums);
    cout << result << endl;

    vector<int> nums2 = {0,1,1,1,1,0,1,1,1,0,0,1,1,1,1,1};
    int result2 = findMaxConsecutiveOnes(nums2);
    cout << result2 << endl;

    return 0;
}
