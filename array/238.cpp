class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> C(nums.size(),1);
        if(nums.size() == 0)
            return C;
						        
        for(int i = 1; i < nums.size(); i++){
            C[i] = C[i-1]*nums[i-1];
        }
										        
        int temp = 1;
        for(int i = nums.size()-2; i >= 0; i--){
            temp = temp * nums[i+1];
            C[i] = C[i] * temp;
        }
        
        return C;
    }
};
