string addBinary(string a, string b) {
    bool carry = false;
    string ans = "";
    if(a.length() > b.length()){
        string t = a;
        a = b;
        b = t;
    }
    auto ita = a.rbegin(); //短的
    auto itb = b.rbegin();
    while(itb != b.rend()){
        if(ita != a.rend() && itb != b.rend()){
            if(*ita == '1' && *itb == '1'){
                if(carry)
                    ans.insert(ans.begin() ,'1');
                else
                    ans.insert(ans.begin() ,'0');
                carry = true;
            }
            else if(*ita != *itb){ // 1 + 0
                if(carry){
                    ans.insert(ans.begin() , '0');
                }
                else{
                    ans.insert(ans.begin() , '1');
                }       
            }
            else{ // 0 + 0
                if(carry){
                    ans.insert(ans.begin() , '1');
                    carry = false;
                }
                else{
                    ans.insert(ans.begin() , '0');
                }
            }
            ita++;
            itb++;
        }
        else if( ita == a.rend() ){ // 短的到底
            if(carry){
                if(*itb == '1') // 1 + 1
                    ans.insert(ans.begin() , '0');
                else{
                    ans.insert(ans.begin() , '1');
                    carry = false;    
                }
            }
            else{
                if(*itb == '1'){
                    ans.insert(ans.begin() , '1');
                }
                else
                    ans.insert(ans.begin() , '0');
            }
            itb++;
        }
    }
    if(carry)
        ans.insert(ans.begin() , '1');
    return ans;
}