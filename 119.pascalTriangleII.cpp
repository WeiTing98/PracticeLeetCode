vector<int> getRow(int rowIndex) {
    vector<int> ans = {1} , prev = {1, 1};
    if(rowIndex == 0){
        return ans;
    }
    else{
        ans.push_back(1);
        if(rowIndex == 1)
            return ans; // {1,1}
        for(int i = 1; i < rowIndex ; i++){
            ans.push_back(1); // {1,1,1}->{1,1,1,1}
            for(int j = 0 ; j < prev.size() - 1 ; j++){
                ans[j + 1] = prev[j] + prev[j + 1];
            } 
            prev = ans;
        }
        
    }
    return ans;
}