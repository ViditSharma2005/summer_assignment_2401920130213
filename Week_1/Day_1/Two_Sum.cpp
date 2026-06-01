class Solution {
public:
#include <vector>
#include <unordered_map>
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(),i=0,j=i+1;
        while(i!=(n-1)){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }else if(j<n-1){
                j++;
            }else if(j==n-1){
                i++;
                j=i+1;
            }
        }
        return{};
    }
};