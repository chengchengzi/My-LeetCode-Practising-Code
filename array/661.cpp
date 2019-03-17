#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
    int width = M[0].size();
    int height = M.size();
    vector<vector<int>> result(height,vector<int>(width,0));

    for(int i = 0; i < height; i++){
        for(int j = 0; i < width; j++){
                int sum = 0;
            if(i == 0){
                if(j == 0){
                    sum = M[i][j] + M[i][j+1] + M[i + 1][j] + M[i + 1][j + 1];
                    result[i][j] = sum / 4;
                }
                else if(j = width - 1){
                    sum = M[i][j] + M[i][j - 1] + M[i + 1][j] + M[i + 1][j - 1];
                    result[i][j] = sum / 4;
                }
                else{
                    sum = M[i][j] + M[i][j-1] + M[i][j+1] + M[i+1][j] + M[i+1][j] + M[i+1][j+1];
                    result[i][j] = sum / 6;
                }
            }else if(i == width -1){

            }
        }
    }
}

int main(){

    return 0;
}
