#include <bits/stdc++.h> 
int getLengthofLongestSubstring(string s, int k) {
    int j = 0 , mx = 0;
    int n = s.size();
    map<char,int> check;
    
    
    for(int i = 0 ; i < n ; i++){
        check[s[i]]++;
        if(check.size() <= k){
            int cnt = 0 ;
            for(auto x:check) cnt += x.second; 
            mx = max(cnt,mx);
        }
        else{
            while(check.size() != k){
                check[s[j]]--;
                if(check[s[j]] == 0) check.erase(s[j]);
                j++;
            } 
        }
    }
    
    return mx;
}