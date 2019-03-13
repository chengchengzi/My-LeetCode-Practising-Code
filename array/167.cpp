#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers,int target){
    vector<int> result(2,0);
    for(int i = 0; i < numbers.size();i++){
        for(int j = i + 1; j < numbers.size();j++){
            if(numbers[i] + numbers[j] == target){
                result[0] = i + 1;
                result[1] = j + 1;
                break;
            }
        }
    }
    return result;
}

int main(){
    vector<int> numbers = {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(numbers,target);
    for(auto w : result)
        cout << w << " ";
    return 0;
}
