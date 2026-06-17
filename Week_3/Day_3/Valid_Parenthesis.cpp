class Solution {
public:
#include<bits/stdc++.h>
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty()) return false;

                char a = st.top();
                if ((a == '(' && s[i] == ')') ||
                    (a == '{' && s[i] == '}') ||
                    (a == '[' && s[i] == ']')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};