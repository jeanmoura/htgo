//https://leetcode.com/problems/climbing-stairs/description/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){}


class Solution {
public:
    int climbStairs(int n) {
        int ans[n+1];
        ans[0] = 1;
        ans[1] = 1;
        
        for(int i = 2; i <= n; i++) {
            ans[i] = ans[i-1] + ans[i-2];
        }
        return ans[n];
    }
};