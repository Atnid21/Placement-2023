350. Intersection of Two Arrays II

Given two integer arrays nums1 and nums2, return an array of their 
intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]



class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans;
        
        unordered_map<int,int>mp;
        
        // putting nums1 values in map
        for(auto i:nums1)
            mp[i]++;
        
        
        for(auto i:nums2)
        {
            // Checking how many time the count of nums2[i] 
            if(mp[i] > 0){
                ans.push_back(i);
                // decrementing by -1 
                mp[i]--;
            }
        }
        
        return ans;
        
    }
};