class Solution {
public:
    bool isValid(string s) {

        stack<char>st;

        for(char x : s){
            if(x=='(' || x== '[' || x== '{'){
                st.push(x);
            }else if(st.size()>0 && st.top()=='(' && x==')' ){
                st.pop();
            }else if(st.size()>0 && st.top()=='[' && x==']' ){
                st.pop();
            }else if(st.size()>0 && st.top()=='{' && x=='}' ){
                st.pop();
            }else{
                return false;
            }
        }
        
        return (st.size()==0) ? true : false;
    }
};