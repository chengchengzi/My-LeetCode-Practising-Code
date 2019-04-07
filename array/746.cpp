#include<iostream>
#include<vector>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
    int sum_1 = 0; // climb one step
    int sum_2 = 0; // climb two steps
    int min_sum_1 = 0;
    int min_sum_2 = 0;
    if(cost.size() == 1){
        return cost[0];
    }
    else{
        for(int i = 0; i < cost.size()-1; i++){
            int temp_sum = min(sum_1 + cost[i],sum_1 + cost[i + 1]);
            min_sum_1 += temp_sum;
        }
        for(int i = 1; i < cost.size()-1; i++){
            int temp_sum = min(sum_2 + cost[i],sum_2 + cost[i + 1]);
            min_sum_2 += temp_sum;
        }
    }
    return (min_sum_1 <= min_sum_2) ? min_sum_1 : min_sum_2;
}
int main(){
    vector<int> cost = {10, 15, 20};
    int result = minCostClimbingStairs(cost);
    cout << result << endl;


    vector<int> cost1 = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    int result1 = minCostClimbingStairs(cost1);
    cout << result1 << endl;
    return 0;
}
