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
    
    string words = "";
    for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){
            words+=tolower(s[i]);
        }
    }
    
    int n = words.size();
    int i=0;
    int j=n-1;
    
    while(i<=j){
        if(words[i]!=words[j]){
            return false;
        }
        i++;
        j--;
    }
    
    return true;
    
}};