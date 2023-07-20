// method 1
int singleNumber(vector<int>& nums) {        
    set<int> check;
    for(const auto& num : nums){
        if(check.find(num) != check.end()){
            check.erase(num);
        }
        else{
            check.insert(num);
        }
    }
    return *check.begin();
}
// method 2
int singleNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i += 2){
            if(nums[i] != nums[i + 1])
                return nums[i];
        }
        return nums[nums.size() - 1];
}
