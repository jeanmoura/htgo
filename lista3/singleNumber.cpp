

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){}

class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int result = 0;
         for (int i = 0; i <= nums.size()-1; i++) {
             result ^= nums[i];    
         }
    return result;
    }
};