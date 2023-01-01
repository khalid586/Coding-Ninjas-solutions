#include <bits/stdc++.h>
 
string removeVowels(string inputString) {
    char ch[] = {'a','e','i','o','u'};
    
    int n = inputString.size();
    string ans;
    
    for(int i = 0 ; i < n ; i++){
        bool ok = 1;
        char temp = tolower(inputString[i]);
        for(auto x:ch) if(x == temp) ok = 0;
        
        if(ok) ans += inputString[i];
    }
    
    return ans;
}
