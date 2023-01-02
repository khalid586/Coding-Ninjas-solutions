#include <bits/stdc++.h> 

long long maxSubarraySum(int arr[], int n)
{
      long long  curr = 0 , mx = 0;
      for(int i = 0 ; i < n ; i++){
           curr = max(arr[i] + curr , 0LL);
           mx = max(mx , curr);
      } 
      return mx;
}