#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

int main(){}


class Solution {
public:
    bool isAnagram(string s, string t) {
    
    unordered_map<char,int>mpp;
    unordered_map<char,int>map;

    if(s.size()!=t.size())
        return false;
   
    for(int i=0;i<s.size();i++) {
        mpp[s[i]]++;
        map[t[i]]++;
    }

    if(mpp==map)
    return true;
    return false;    
    }
};