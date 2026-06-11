class Solution {
public:
#include<bits/stdc++.h>
    void solve(int open, int close, vector<string>&ans, string str, int n){
        if(str.length()== 2*n){
            ans.push_back(str);
            return;
        }
        if(open<n) solve(open+1,close, ans, str+ '(', n);
    
        if(close<open) solve(open,close+1, ans,str+')',n);

    }
    vector<string> generateParenthesis(int n) {
        
        vector<string>ans;
        string str="";
        solve(0,0, ans, str,n);
        return ans;
    }
};