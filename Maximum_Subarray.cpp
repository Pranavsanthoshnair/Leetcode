/*
Leetcode Solution
Problem No : 53
Problem Name : Maximum Subarray
Difficulty : Medium
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;
        for(int val : nums){
            currSum += val;
            maxSum = max(currSum, maxSum);
            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {
    vector<int> nums = {3,-4,5,4,-1,7,-8};
    Solution obj;
    cout << obj.maxSubArray(nums) << endl;
    return 0;
}
