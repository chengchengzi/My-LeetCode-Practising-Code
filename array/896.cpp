#include<iostream>
#include<vector>
using namespace std;

bool isMonotonic(vector<int>& A) {
    bool inc = true,dec = true;
    for(int i = 1; i < A.size(); i++){
        inc = inc & (A[i - 1] <= A[i]);
        dec = dec & (A[i - 1] >= A[i]);
    }
    return inc || dec;
}

int  main(){
    vector<int> A1 = {1,2,2,3};
    cout << isMonotonic(A1) << endl;

    vector<int> A2 = {6,5,4,4};
    cout << isMonotonic(A2) << endl;

    vector<int> A3 = {1,3,2};
    cout << isMonotonic(A3) << endl;

    vector<int> A4 = {1,2,4,5};
    cout << isMonotonic(A4) << endl;

    vector<int> A5 = {1,1,1};
    cout << isMonotonic(A5) << endl;
    return 0;
}
