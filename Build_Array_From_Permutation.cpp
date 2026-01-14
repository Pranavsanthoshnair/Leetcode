/*
Leetcode Solution
Problem No : 1920
Problem Name : Build Array From Permutation
Difficulty : Easy
*/

#include <bits/stdc++.h>
using namespace std;

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

int main() {
    Solution obj;

    vector<int> nums = {0,2,1,5,3,4};
    vector<int> ans = obj.buildArray(nums);

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}
