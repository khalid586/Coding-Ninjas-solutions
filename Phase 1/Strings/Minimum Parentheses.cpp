#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    int n = pattern.size();
    int ans = 0 , left = 0;
    
    for(int i = 0 ; i < n ; i++){
        if(pattern[i] == '(') ++left;   
        else if(left) --left;
        else ++ans;
    }
    ans += left;
    return ans;
}