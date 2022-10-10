//https://leetcode.com/problems/fibonacci-number/submissions/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){}

class Solution {
    public int fib(int n) {
      if (n <= 0) return 0;
        else if (n ==1) return 1;
        return fib(n -1) + fib(n-2);  
    }
}