class Solution {
public:
#include<bits/stdc++.h>
    string longestCommonPrefix(vector<string>& strs) {
        string a,b;
        if(strs.size()>=1)a = strs[0];
        if(strs.size()>=2)b = strs[1];
        if(strs.size()==1) return strs[0];
        if(strs.size()==0) return "";
        int point = a.length();
        while (a.substr(0, point) != b.substr(0, point))
            point--;
        string pre = a.substr(0, point);
        int j = 0;
        while (point) {
            if (pre.substr(0, point) != strs[j].substr(0, point)) {
                point--;
            } else {
                j++;
            }
            if (j == strs.size())
                break;
        }
        return pre.substr(0, point);
    }
};