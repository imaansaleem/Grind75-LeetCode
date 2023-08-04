class Solution {
public:

    bool isValid(string s) {
        stack<char>a;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                a.push(s[i]);

            else{
                if(a.size()==0)
                    return false;

                if(s[i]==')'){
                    if(a.top()!='(')
                        return false;
                }

                else if(s[i]==']'){
                    if(a.top()!='[')
                        return false;
                }

                else if(s[i]=='}'){
                    if(a.top()!='{')
                        return false;
                }
                a.pop();
            }
        }
        if(a.size()==0)
            return true;
        return false;
    }
};
