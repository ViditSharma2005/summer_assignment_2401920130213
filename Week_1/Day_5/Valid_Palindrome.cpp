class Solution {
public:
#include<bits/stdc++.h>
    bool isPalindrome(string s) {
        string st="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                st+=tolower(s[i]);
            }
        }
        int n = st.length();
        for(int i=0;i<(n/2);i++){
            if(st==""){
                return true;
            }else if(n%2==0 && (st[i]!=st[(n-1)-i])){
                return false;
            }else if(n%2!=0 && i!=(n/2) && (st[i]!=st[(n-1)-i])){
                return false;
            }
        }
        return true;
    }
};