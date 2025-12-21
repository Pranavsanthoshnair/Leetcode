/*
Leetcode Solution
Problem No : 169
Problem Name : Majority Element
Difficulty : Easy
*/

// Solution 1

/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int value : nums){
            int freq = 0;
            for(int el : nums){
                if(el == value){
                    freq++;
                }
            }
            if(freq > n/2){
                return value;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {2,2,1,1,1};
    Solution obj;
    cout << obj.majorityElement(nums) << endl;
    return 0;
}
*/

// Solution 2 (more optimised)

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int freq = 1;
        int ans = nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i - 1]){
                freq++;
            } else {
                freq = 1;
                ans = nums[i];
            }
            if(freq > n / 2){
                return ans;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {2, 2, 1, 1, 1};
    Solution obj;
    cout << obj.majorityElement(nums) << endl;
    return 0;
}
*/

// Solution 3

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq = 0;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    Solution obj;
    cout << obj.majorityElement(nums) << endl;
    return 0;
}
