#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
    int width = M[0].size();
    int height = M.size();
    vector<vector<int>> result(height,vector<int>(width,0));

    //图像的四个边角点
    result[0][0] = (M[0][0] + M[0][1] + M[1][0] + M[1][1]) / 4;
    result[0][width-1] = ( M[0][width-1] + M[0][width-2] + M[1][width-2] + M[1][width-1]) / 4;
    result[height-1][0] = (M[height-1][0] + M[height-2][0] + M[height-1][1] + M[height-2][1]) / 4;
    result[height-1][width-1] = (M[height-1][width-1] + M[height-1][width-2] + M[height-2][width-2] + M[height-2][width-2]) / 4;

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(i ==0 && j > 0)
                result[i][j] = (M[i][j] + M[i][j-1] + M[i][j+2] + M[i+1][j-1] + M[i+1][j] + M[i+1][j+1]) / 6;
            else if(i > 0 && j == 0)
                result[i][j] = (M[i][j] + M[i-1][j] + M[i-1][j+1] + M[i][j+1] + M[i+1][j+1] + M[i+1][j]) / 6;
            else if(i == height - 1 && j > 0)
                result[i][j] = (M[i][j] + M[i][j-1] + M[i-1][j-1] + M[i-1][j] + M[i-1][j+1] + M[i][j+1])/ 6;
            else if(i > 0 && j == width-1 )
                result[i][j] = (M[i][j] + M[i-1][j] + M[i-1][j-1] + M[i][j-1] + M[i+1][j-1] + M[i+1][j])/ 6;
            else
                result[i][i] = (M[i-1][j-1] + M[i-1][j] + M[i-1][j+1] + M[i][j-1] + M[i][j] +
                                M[i][j+1] + M[i+1][j-1] + M[i+1][j] + M[i+1][j+1])/ 9;
        }
    }
    return result;
}

int main(){
    vector<vector<int>> M = {{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>> result = imageSmoother(M);
    for(auto u : result)
        for(auto w : u)
            cout << w << " ";
    return 0;
}
