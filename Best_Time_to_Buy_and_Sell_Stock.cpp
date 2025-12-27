/*
Leetcode Solution
Problem No : 121
Problem Name : Best Time to Buy and Sell Stock
Difficulty : Easy
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mP = 0;
        int bestBuy = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            int profitToday = prices[i] - bestBuy;
            mP = max(mP, profitToday);
            bestBuy = min(bestBuy, prices[i]);
        }
        return mP;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter prices:\n";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << "Maximum Profit: " << obj.maxProfit(prices) << endl;

    return 0;
}
