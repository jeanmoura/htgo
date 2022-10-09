#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){}



class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for (int i = 0; i < address.size(); i++) {
            if (address[i] == '.') {
                result += "[.]";
            }
            else {
                result += address[i];
            }
        }
        return result;
    }
};