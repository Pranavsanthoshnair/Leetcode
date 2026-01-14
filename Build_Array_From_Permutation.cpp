/*
Leetcode Solution
Problem No : 1920
Problem Name : Build Array From Permutation
Difficulty : Easy
*/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for(int i = 0; i < n; i++){
            ans[i] = nums[nums[i]];
        }

        return ans;
    }
};
