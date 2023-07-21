// use hash map
int majorityElement(vector<int>& nums) {
    unordered_map<int,int> major;
    for(const auto& num : nums){
        major[num]++;
        if(major[num] > nums.size() / 2)
            return num;
    }
    return -1;
}

// use moore's voting algorithm
int majorityElement(vector<int>& nums) {
    int major = nums[0], counter = 0;
    for(const auto& num: nums){
        if(major == num){
            counter++;
        }
        else if(counter > 0){
            counter--;
        }
        else{
            major = num;
            counter++;
        }
    }
    return major;
}