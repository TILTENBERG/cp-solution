class Solution {
public:
    string removeOccurrences(string s, string part) {
        int size=s.size();
        int partsize=part.size();
        stack<char> st;
        for(int i=0;i<size;++i){
            st.push(s[i]);
            if(st.size()>=partsize && checkmatch(st,part,partsize)){
                for(int j=0;j<partsize;++j){
                    st.pop();
                }
            }
        }
        string ans;
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
        
        
    }
    bool checkmatch(stack<char> & st,string & str, int & partsize ){
        stack<char> s=st;
        for(int k=partsize-1;k>=0;--k){
            if(s.top()!=str[k]){
                return false;
            }
            s.pop();

        }
        return true;
    }
};