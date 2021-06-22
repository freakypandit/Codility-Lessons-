// you can use includes, for example:
// #include <algorithm>

#include <bits/stdc++.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector <int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int totalSum = 0;
    for (auto elem : A)
        totalSum += elem;
        
    int sum_so_far = 0;
    int minDiff = INT_MAX;
    
    for (auto elem : A) {
        minDiff = min(minDiff, abs(totalSum - sum_so_far));
        totalSum -= elem;
        sum_so_far += elem;
    }
    
    return minDiff;
}
