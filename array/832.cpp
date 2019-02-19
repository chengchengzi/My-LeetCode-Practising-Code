#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
         for(int i = 0; i < A.size(); ++i){
             for(int j = 0; j < A[i].size() / 2;++j){
                    int temp = A[i][j];
                    A[i][j] = A[i][A[j].size() - j - 1];
                    A[i][A[j].size() - j - 1] = temp;
             }
             for(int j = 0; j < A[i].size();++j){
                    if(A[i][j] == 0)
                        A[i][j] = 1;
                    else
                        A[i][j] = 0;
                }
            }
         return A;
    }


int main(){
      vector<vector<int>> A = {{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
      flipAndInvertImage(A);
      for(auto w : A){
        for(auto v : w){
            cout << v << " ";
        }
        cout <<endl;
      }
      return 0;
}
