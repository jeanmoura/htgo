#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

int main(){}

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        for (char c : s) {
            m[c]++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (m[s.at(i)] == 1) {
                return i;
            }
        }
        return -1;
    }
};