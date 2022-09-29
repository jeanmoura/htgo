//https://leetcode.com/problems/contains-duplicate/-

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){}

class Solution {
public:
  bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i = 1 ;i < nums.size(); i++)
      if(nums[i-1]==nums[i])return true;
      
    return false;
  }
};