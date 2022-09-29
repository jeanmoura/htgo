#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;

int main(){}

class Solution {
public:
    bool isValid(string s) { 
        
        // returns true if s is a valid parentheses string 
        stack<char> x; // use stack to x the string
        for(auto i:s){ // loop through the string
            if(i=='(' or i=='{' or i=='[') x.push(i); // if it is a left bracket, push it into the stack
            else // if it is a right bracket
            {
                // if the stack is empty or the top of the stack is not the corresponding left bracket
                if(x.empty() || (x.top()=='(' && i!=')') or (x.top()=='{' && i!='}') or (x.top()=='[' && i!=']') ) 
                    return false; // return false
                x.pop(); // pop the top of the stack
            }
        }
        return x.empty(); // if the stack is empty, return true
    }
};