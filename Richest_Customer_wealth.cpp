/*
Leetcode Solution
Problem No : 1672
Problem Name : Richest Customer Wealth
Difficulty : Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx = 0;

        for(int i = 0; i < accounts.size(); i++){
            int sum = 0;
            for(int j = 0; j < accounts[i].size(); j++){
                sum += accounts[i][j];
            }
            mx = max(mx, sum);
        }

        return mx;
    }
};

int main() {
    Solution obj;

    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};
    cout << obj.maximumWealth(accounts);

    return 0;
}
