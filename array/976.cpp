#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/**
    idea:首先对array A排序，依次取三个数检查是否能构成三角形，
    如果能则计算周长，不能则不计算，最后返回最大的周长
*/
int largestPerimeter(vector<int>& A) {
      int perimeter = 0;
      int temp = 0;
      sort(A.begin(),A.end());
      for(int i = 0; i < A.size()-2;++i){
        int a = A[i];
        int b = A[i + 1];
        int c = A[i + 2];
        if(a + b > c && a + c > b && b + c > a){
            temp = a + b + c;
            if(temp >= perimeter)
                perimeter = temp;
        }
      }
      return perimeter;
}

int main(){
    vector<int> A1 = {2,1,2};
    vector<int> A2 = {1,2,1};
    vector<int> A3 = {3,2,3,4};
    vector<int> A4 = {3,6,3,2};
    cout << largestPerimeter(A1) << endl;
    cout << largestPerimeter(A2) << endl;
    cout << largestPerimeter(A3) << endl;
    cout << largestPerimeter(A4) << endl;
    return 0;
}
