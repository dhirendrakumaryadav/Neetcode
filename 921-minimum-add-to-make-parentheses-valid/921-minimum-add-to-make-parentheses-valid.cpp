class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0;
        stack<char>st;
     
        int i=0;
        int n=s.size();
        while(i<n){
            if(s[i]=='('){
                st.push(s[i]);
            }
          else if(s[i]==')'&&!st.empty()){
                st.pop();
            }
            else if(s[i]==')'&&st.empty()){
                c++;
            }
            i++;
        }
        return c+st.size();
    }
};