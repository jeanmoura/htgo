#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>

using namespace std;

int main(){}

/*
int fib(int n) {
if (n <= 1) {
return n;
}

return fib(n - 1) + fib(n - 2);
}

void printUnorderedPairs(vector<int>& arr) {
for (int i = 0; i < arr.size(); i++) {
for (int j = i + 1; j < arr.size(); j++) {
cout << arr[i] << "," << arr[j];
}
}
}

void printUnorderedPairs(vector<int>& arrayA, vector<int>& arrayB) {
for (int i = 0; i < arrayA.size(); i++) {
for (int j = 0; j < arrayB.size(); j++) {
if (arrayA[i] < arrayB[j]) {
cout << arrayA[i] << "," << arrayB[j];
}
}
}
}

*/
/*
void printUnorderedPairs(vector<int>& arrayA, vector<int>& arrayB) {
for (int i = 0; i < arrayA.size(); i++) {
for (int j = 0; j < arrayB.size(); j++) {
for (int k = 0; k < 100000; k++) {
cout << arrayA[i] << "," << arrayB[j];
}
}
}
}
*/

/* E) Não rodou mesmo colocando uma struct


int sum(node) {
if (node == NULL) {
return 0;
}

return sum(node.left) + node.value + sum(node.right);
}

*/


/* F) Não rodou, da erro na variavel sqrt():

bool isPrime(int n) {
for (int x = 2; x <= sqrt(n); x++) {
if (n % x == 0) {
return false;
}
}

return true;
}
*/

/* G) Não rodou tem varios erros:

void permutation(string str, string prefix) { //think about a str with
prefix ""
if (str.length() == 0) {
cout << prefix;
} else {
for (int i = 0; i < str.length(); i++) {
string rem = str.substr(0, i) + str.substr(i + 1);
permutation(rem, prefix + str[i]);
}
}
}
*/


/* H) Tambem não rodou:

int div(int a, int b) {
int count = 0;
int sum = b;

while (sum <= a) {
sum += b;
count++;
}

return count;
}

*/
