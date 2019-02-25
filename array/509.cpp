#include<iostream>
using namespace std;

/**
    idea：迭代或者递归
*/

// 迭代解决
int fib(int N) {
    int f0 = 0;
    int f1 = 1;
    int sum = 0;
    if(N == 0)
        sum = f0;
    else if(N == 1)
        sum = f0 + f1;
    else {
        for(int i = 1; i < N; ++i){
            sum = f0 + f1;
            f0 = f1;
            f1 = sum;
        }
    }
    return sum;
}

//递归解决
int fib2(int N){
    if(N == 0)
        return 0;
    if(N == 1)
        return 1;
    if(N > 1)
        return fib2(N - 1) + fib2(N - 2);
}
int main(){
    cout << fib(2) << endl;
    cout << fib(3) << endl;
    cout << fib(5) <<endl;
    cout << "iterator：" << endl;
    cout << fib2(2) << " " << fib2(3) << " " << fib2(5) << endl;
    return 0;
}
