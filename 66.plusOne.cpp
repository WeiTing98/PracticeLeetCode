
vector<int> plusOne(vector<int>& digits) {
    if(digits[digits.size() - 1] < 9){
        digits[digits.size() - 1]++;
        return digits;
    }
    else{
        int i = digits.size() - 1, nines = 0;
        while(digits[i] == 9){
            digits[i] = 0;
            i--;
            nines++;
            if(i < 0)break;
        }
        if(nines == digits.size()){
            digits.insert(digits.begin(), 1);
        }
        else{
            digits[digits.size() - 1 - nines] ++ ;
        }  
    }
    return digits;
}