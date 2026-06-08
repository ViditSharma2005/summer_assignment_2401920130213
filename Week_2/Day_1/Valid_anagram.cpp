class Solution {
public:
#include<bits/stdc++.h>
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m1, m2;

    int n1 = s.length();
    int n2 = t.length();

    if (n1 == n2) {
        for (int i = 0; i < n1; i++) {
            m1[s[i]]++;
            m2[t[i]]++;
        }
        return (m1 == m2);
    }
        return false;
        
    }
};