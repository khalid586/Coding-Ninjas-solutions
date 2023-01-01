#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9;

void FastIO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}

int32_t main() {
  FastIO();
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0 ; i < n ; i++) cin >> arr[i];
  

    int mx = 0,prof = 0 , one = 0;
      	for(int i = 0 ; i < n ; i++){
        	if(arr[i] and prof)   --prof;
        	else if(!arr[i])      ++prof;
        
        	if(arr[i]) ++one;
        	mx = max(mx,prof);
      	}

        mx += one;
        cout << mx << endl;
  }
  
}