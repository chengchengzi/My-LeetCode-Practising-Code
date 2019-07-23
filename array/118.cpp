#include<iostream>
#include<vector>
using namespace std;


vector<vector<int>> generate(int numRows) {

        vector<vector<int>> result(numRows,vector<int>(numRows,0));

        for(int i = 0; i < numRows; i++){
            result[i][0] = 1;
            result[i][i] = 1;
            for(int j = 1; j < i; j++){
                result[i][j] = result[i-1][j-1] + result[i-1][j];
            }
        }

        for(int  i = 0; i < numRows; i++)
            result[i].resize(i+1);

        return result;

}

int main(){
    int numRows = 5;
    vector<vector<int>> re = generate(numRows);
    for(auto w: re){
        for(auto v: w)
            cout << v << " ";
        cout << endl;
    }
    return 0;
}
