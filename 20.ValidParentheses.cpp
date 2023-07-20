bool isValid(string s) {
    stack<char> valid;
    for(auto& c: s){
        if(!valid.empty())
            if(c == '{' || c == '(' || c == '[')
                valid.push(c);
            else{
                if(c == '}' && valid.top() == '{')
                    valid.pop();
                else if(c == ')' && valid.top() == '(')
                    valid.pop();
                else if(c == ']' && valid.top() == '[')
                    valid.pop();
                else
                    return false;
            }
        else
            valid.push(c);
    }
    return valid.empty();
} 