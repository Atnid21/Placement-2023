https://leetcode.com/problems/intersection-of-two-arrays/


349. Intersection of Two Arrays
Easy

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.


Code

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,bool>mp;
        
        for(auto i:nums1)
            mp[i]=true;
        
        vector<int>ans;
        
        for(int i=0;i<nums2.size();i++){
            if(mp[nums2[i]] == true){
                ans.push_back(nums2[i]);
                mp[nums2[i]]=false;
            }
        }
        
        return ans;
    }
};