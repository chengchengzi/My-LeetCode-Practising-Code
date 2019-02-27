#include<iostream>
#include<vector>
#include<queue>
using namespace std;

/**
    idea:reshape
    ���ȼ���ԭ�������*���Ƿ�����¾������*�У�������ȣ�����ԭ����
    �����ȣ���ԭ���������Ԫ�����η������q�У��ٽ�q�е�ֵ���θ�ֵ���¾���
*/
vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int row = nums.size();
        int colum = nums[0].size();
        if(row * colum != r * c)
            return nums;
        else{
            queue<int> q;
            for(int i = 0; i < row; i++)
                for(int j = 0; j < colum; j++)
                    q.push(nums[i][j]);

            vector<vector<int>> R = vector<vector<int>>(r,vector<int>(c,0));

            for(int i = 0; i < r; i++)
                for(int j = 0; j < c; j++)
                    if(!q.empty()){
                        R[i][j] = q.front();
                        q.pop();
                    }
            return R;
        }
}


int main(){
    vector<vector<int>> nums = {{1,2},{3,4}};
    int r = 1;
    int c = 4;
    vector<vector<int>> R = matrixReshape(nums,r,c);
    for(int i = 0; i < R.size(); i++){
        for(int j = 0; j < R[0].size(); j++){
            cout << R[i][j] << " ";
        }
        cout <<endl;
    }
    return 0;
}
