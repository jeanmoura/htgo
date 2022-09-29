#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>

using namespace std;

int main(){}


class Solution {
public:
    double myPow(double x, int n) {
         if(n==0)
            return 1;
        if(n<0){
            n=-n;  //as 2^-2=1/(2^2)
            x=1/x;
        }
        if(n%2==0)
            return myPow(x*x,n/2);   //as 2^4=(2^2)^2;
            return x*myPow(x*x,n/2);    // as 2^3=2*(2^2) 
    }
};