/*
Leetcode Solution
Problem No : 11
Problem Name : Container with most water
Difficulty : Medium
*/

// Solution 1 (Brute Force) - Gives TLE Error
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        for (int i = 0; i < height.size(); i++) {
            for (int j = i+1; j < height.size(); j++) {
                int w = j - i;
                int ht = min(height[i], height[j]);
                int currWater = w * ht;
                maxWater = max(maxWater, currWater);
            }
        }
        return maxWater;
    }
};

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    Solution obj;
    int result = obj.maxArea(height);

    cout << "Maximum Water: " << result << endl;
    return 0;
}
*/

// Solution 2 (Optimised)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp = 0, rp = height.size() - 1;

        while (lp < rp) {
            int w = rp - lp;
            int h = min(height[lp], height[rp]);
            int currWater = w * h;
            maxWater = max(maxWater, currWater);

            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    Solution obj;
    cout << "Maximum Water: " << obj.maxArea(height) << endl;

    return 0;
}
