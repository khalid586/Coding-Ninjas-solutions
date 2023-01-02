#include <bits/stdc++.h> 
string encode(string &message)
{
    int n = message.size() , cnt = 1;
    string ans;

    for(int i = 0 ; i < n ; i++){
        if(message[i] == message[i+1]) ++cnt;
        else { 
            ans += message[i]; 
            ans += to_string(cnt); 
            cnt = 1; 
        }
    } 
    
    return ans;
}