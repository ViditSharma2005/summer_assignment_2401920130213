class Solution {
public:
#include<bits/stdc++.h>
    int maxArea(vector<int>& height) {
        int n= height.size();
        int i=0,j=n-1;
        int maxAr= INT_MIN;
        while(i<j){
            int area= min(height[i],height[j])*(j-i);
            maxAr= max(area, maxAr);            
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;                
            }
        }
        return maxAr;


    }
};