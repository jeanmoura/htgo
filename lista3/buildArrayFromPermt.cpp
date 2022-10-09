//https://leetcode.com/problems/build-array-from-permutation/description/

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>

using namespace std;

int main(){}


class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans = nums;
        for (int i = 0; i < nums.size(); i++) {
            ans[i] = nums[nums[i]];
        }
        return ans;    
    }
};