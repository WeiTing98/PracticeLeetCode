#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int prev = nums[0];
    int k = 1 , i = 1;
    while( i < nums.size() ){
        if(nums[i] != prev){
            prev = nums[i];
            k++;
            i++;    
        }
        else{
            nums.erase(nums.begin() + i);
        }                
        
    }
    return k;
}

int main(){
    vector<int> n = {0,1,2,3,4};
    cout << removeDuplicates(n);
    return 0;
}