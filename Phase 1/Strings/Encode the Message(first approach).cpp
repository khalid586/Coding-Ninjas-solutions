#include <bits/stdc++.h> 
string encode(string &message)
{
    int n = message.size() , cnt = 1;
    string ans;
    if(n == 1){
        ans += message;
        ans += '1';
        return ans;
    }
    for(int i = 1 ; i < n ; i++){
        if(message[i] == message[i-1]) ++cnt;
        else { 
            stringstream ss;
            ss << cnt;
            string t;
            ss >> t;
            ans += message[i-1]; ans += t; cnt = 1; 
        }
        
        if(i == n-1){
            stringstream s;
            s << cnt;
            string t;
            s >> t;
            ans += message[i] ; ans += t;
        }
    } 

    
    return ans;
}