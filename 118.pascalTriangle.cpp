vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;    
    triangle.push_back({1}); 
    if(numRows == 1)
        return triangle;
    else{
        triangle.push_back({1,1});
        if(numRows == 2){
            return triangle;
        }
        for(int i = 1; i < numRows - 1; i++){
            vector<int> row(i + 2, 1);
            for(int j = 0; j < triangle[i].size() - 1; j++){
                row[j + 1] = triangle[i][j] + triangle[i][j + 1];
            }
            triangle.push_back(row);
        }
    }
    return triangle;
}