class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,pair<int,int>> check;
        int count = 0;
        for(int num: nums){
            check[num].first++;
            if(check[num].first > 1 && count - check[num].second <= k )
                return true;
            check[num].second = count;
            count++;
        }
        return false;
    }
};
