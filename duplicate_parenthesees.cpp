bool isduplicate(string s){
    stack<char> s;

    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch != ')'){
            s.push(ch);
        }else{
            if(s.top() == '('){
                return true;
            }
            while(s.top() != '('){
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}