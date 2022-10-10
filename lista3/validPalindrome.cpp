//https://leetcode.com/problems/valid-palindrome/description/
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){}


class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left <= right) {
            while (!isTarget(s[left]) && left < right) {
                left++;
            }
            while (!isTarget(s[right]) && left < right) {
                right--;
            }
            if (toLower(s[left]) != toLower(s[right])) {
                return false;
            }
            left++, right--;
        }
        return true;
    }
    bool isTarget(char c) {
        return (('A' <= c && c <= 'Z') || 
                ('a' <= c && c <= 'z') || 
                ('0' <= c && c <= '9')) ? true : false;
    }
    char toLower(char c) {
        return ('A' <= c && c <= 'Z') ? c + 32 : c;
    }
};