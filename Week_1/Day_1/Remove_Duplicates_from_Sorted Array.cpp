class Solution {
public:
#include <vector>
    int removeDuplicates(vector<int>& nums) {
        set <int> s(nums.begin(),nums.end());
        return s.size();
    }
};