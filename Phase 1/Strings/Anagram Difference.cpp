#include <bits/stdc++.h> 
int getMinimumAnagramDifference(string &s, string &s2) {
    int cnt[26] = {} , n = s.size() , ans = 0;
   
    for(int i = 0 ; i < n ; i++){
        cnt[s[i] - 'a']++;
    }
    for(int i = 0 ; i < n ; i++){
        if(!cnt[s2[i] - 'a']) ++ans;
        else            cnt[s2[i] - 'a']--;
    }
    return ans;
}