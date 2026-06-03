class Solution {
public:
#include<bits/stdc++.h>
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> result(A.size());
        int l = 0, r = A.size() - 1;
        for (int k = A.size() - 1; k >= 0; k--) {
            if (abs(A[r]) > abs(A[l])) result[k] = A[r] * A[r--];
            else result[k] = A[l] * A[l++];
        }
        return result;
    }
};