#include<iostream>
#include<vector>
using namespace std;


/**
     ±º‰∏¥‘”∂»£∫O£®n^2£©
*/
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

vector<int> twoSum2(vector<int>& numbers,int target){
    vector<int> result(2,0);
    int i = 0;
    int j = numbers.size() - 1;
    while(i < j){
        int sum = numbers[i] + numbers[j];
        if(sum == target){
            result[0] = i + 1;
            result[1] = j + 1;
            break;
        }
        else if(sum > target){
            j--;
        }
        else{
            i++;
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

    cout << endl;

    vector<int> result2 = twoSum2(numbers,target);
    for(auto w : result2)
        cout << w << " ";

    return 0;
}
