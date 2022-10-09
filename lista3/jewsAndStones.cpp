//https://leetcode.com/problems/jewels-and-stones/description/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){}
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int c=0;
        for(int i=0;i<J.length();i++){
            for(int j=0;j<S.length();j++){
                if(J[i]==S[j])
                    c++;
            }
        }
        return c;
    }
};

//Better Solution:
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int result = 0;
        unordered_set<char> map;
        
        for(char ch : J)
            map.insert(ch);
        
        for(char ch : S)
        {
            if(map.find(ch) != map.end())
                result++;
        }
        
        return result;
    }
};