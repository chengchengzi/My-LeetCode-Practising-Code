#include<iostream>
#include<vector>
#include"697.cpp"
using namespace std;

int findShortestSubArray(vector<int>& nums) {
        vector<int> nums_count(2*nums.size(),0);

        int length = 0;

        if(nums.size() == 1)
            length = 1;
        else{
            for(int i = 0; i < nums.size();i++){
                nums_count[nums[i]]++;
            }

            int degree = nums_count[0];
            int max = 0;
            for(int i = 0; i < nums_count.size();i++){
                if(nums_count[i] >= degree){
                    degree = nums_count[i];
                    max = i;
                }
            }

            int index_i = 0;
            int index_j = 0;
            for(int i = 0; i < nums.size();i++){
                if(max == nums[i]){
                    index_i = i;
                    break;
                }
            }
            for(int j = nums.size()-1; j >=0; j--){
                if(max == nums[j]){
                    index_j = j;
                    break;
                }
            }
            if(index_j >= index_i)
                length = index_j - index_i + 1;
          }
            return length;
}

int main(){
    vector<int> nums= {3,3,4};
    cout << findShortestSubArray(nums) << endl;
    return 0;
}
