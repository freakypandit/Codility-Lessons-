// you can use includes, for example:
// #include <algorithm>
#include <bits/stdc++.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    
    if(N == 0)
        return 0;
        
    vector<int> power{2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
    for(auto elem : power) {
        if(elem == N)
            return 0;
    }
    
    int maxLen = 0;
    int currLen = 0;
    
    bool foundOne = false;
    while(N > 0) {
        
        if(N % 2 == 0)
            currLen++;
            
        else {
            if(foundOne) 
                maxLen = max(maxLen, currLen);
                
            currLen = 0;
            foundOne = true;
        }
        
        N /= 2;
    }
    
    return maxLen;
}
