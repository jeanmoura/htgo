 //Using brute, vector to store all elements TC: O(1) SC: O(N)

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){}

 class MyHashSet {
public:
    vector<int> hashset;
    MyHashSet() {
        hashset.resize(1000001,false);
    }
    
    void add(int key) {
        if (hashset[key] == false) {
            hashset[key] = true;
        }
    }
    
    void remove(int key) {
        if (hashset[key] == true) {
            hashset[key] = false;
        }
    }
    
    bool contains(int key) {
        return hashset[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */