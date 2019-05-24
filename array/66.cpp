#include<iostream>
#include<vector>
using namespace std;

//在vector上实现加法
vector<int> plusOne(vector<int>& digits) {
        vector<int> temp_result,result;
        int flag = 1;   //加法的进位标志

        //实现每一位数的加法过程
        for(int i = digits.size() - 1;i >=0 ;i--){
            int temp = digits[i]+flag;
            flag = temp/10;
            temp %= 10;
            temp_result.push_back(temp);
        }

        //flag为1，说明要增加一位最高位+1
        if(flag)
            result.push_back(1);

        //由于是逆序保存，现在正序输出
        for(int i = temp_result.size()-1;i>=0;i--)
            result.push_back(temp_result[i]);

        return result;
}


int main(){

    vector<int> digits = {4,9,9,9};
    vector<int> result = plusOne(digits);
    for(auto w : result)
        cout << w << " ";
    return 0;
}
