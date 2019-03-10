#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices){
    int profit=0;
    for(int i=1;i<prices.size();i++)
    {
        if(prices[i]-prices[i-1]>0)
            profit+=prices[i]-prices[i-1];
    }
    return profit;
}
int main(){
    vector<int> prices1 = {7,1,5,3,6,4};
    int profit1 = maxProfit(prices1);
    cout << profit1 << endl;

    vector<int> prices2 = {1,2,3,4,5};
    int profit2 = maxProfit(prices2);
    cout << profit2 << endl;

    vector<int> prices3 = {7,6,4,3,1};
    int profit3 = maxProfit(prices3);
    cout << profit3 << endl;

    vector<int> prices4 = {1,2,5,8,9};
    int profit4 = maxProfit(prices4);
    cout << profit4 << endl;
    return 0;
}
