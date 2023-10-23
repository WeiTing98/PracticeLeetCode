class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> check;
        for(int i: nums){
            check[i]++;
            if(check[i]>1)return true;
        }
        return false;
    }
};
