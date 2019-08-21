class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> temp_result,result;
        int flag = 1;  
        for(int i = digits.size() - 1;i >=0 ;i--){
            int temp = digits[i]+flag;
            flag = temp/10;
            temp %= 10;
            temp_result.push_back(temp);
        }
        if(flag)
            result.push_back(1);
        for(int i = temp_result.size()-1;i>=0;i--)
            result.push_back(temp_result[i]);
        return result;
    }
};