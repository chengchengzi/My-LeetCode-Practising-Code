#include<iostream>
#include<vector>
using namespace std;

//��vector��ʵ�ּӷ�
vector<int> plusOne(vector<int>& digits) {
        vector<int> temp_result,result;
        int flag = 1;   //�ӷ��Ľ�λ��־

        //ʵ��ÿһλ���ļӷ�����
        for(int i = digits.size() - 1;i >=0 ;i--){
            int temp = digits[i]+flag;
            flag = temp/10;
            temp %= 10;
            temp_result.push_back(temp);
        }

        //flagΪ1��˵��Ҫ����һλ���λ+1
        if(flag)
            result.push_back(1);

        //���������򱣴棬�����������
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
