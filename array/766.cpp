#include<iostream>
#include<vector>
using namespace std;

/**
    idea���г���Ҫ�Ƚϵ�ֵ�����±��ҹ��ɣ���һ��ֵ�������±궼+1������һ����Ҫ�Աȵ�ֵ�������±�
*/
bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    bool flag = true;
    for(int i = 0; i < matrix.size()-1; i++){
        for(int j = 0; j < matrix[0].size()-1; j++){
            if(matrix[i][j] != matrix[i+1][j+1]){
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,1,2,3},{9,5,1,2}};
    cout << isToeplitzMatrix(matrix) << endl;
    return 0;
}
