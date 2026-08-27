Given an array arr[] of size n containing integers, the task is to find the length of the longest subarray having sum equal to the given value k.

Note: If there is no subarray with sum equal to k, return 0.

Examples: 

Input: arr[] = [10, 5, 2, 7, 1, -10], k = 15
Output: 6
Explanation: Subarrays with sum = 15 are [5, 2, 7, 1], [10, 5] and [10, 5, 2, 7, 1, -10]. The length of the longest subarray with a sum of 15 is 6.

Input: arr[] = [-5, 8, -14, 2, 4, 12], k = -5
Output: 5
Explanation: Only subarray with sum = 15 is [-5, 8, -14, 2, 4] of length 5.

Input: arr[] = [10, -10, 20, 30], k = 5
Output: 0
Explanation: No subarray with sum = 5 is present in arr[].








#include<bits/stdc++.h>
using namespace std;
void longsubarray(int arr[] ,int n, int k)
{
  map<int , int >mp;
  int res =0 ,prefsum =0;
/*  1.int this logic instead of creating whole prefix sum we are just adding it at the moment 
    2.first we are checking whether the prefsum is equal to k or not if it is equal then we retyrn the index+1 why because we are sstartng it from o instead of 1
    3.if prefsum is not equal to k then we are checking in the map like my prefsum -k value is exist in the map or not if its exist thennwe are trying to indentify max value 
    4.if its not present in the map then we are storing it in the map with recent index value */
  for(int i=0; i<n; i++)
  {
    prefsum += arr[i];

    if(prefsum ==k)
      res  = i+1;

    else if(mp.find(prefsum-k) != mp.end())
    {
      res = max(res , i-mp[prefsum-k]);
    }

    if(mp.find(prefsum) == mp.end())
      mp[prefsum] = i;


  }

  cout<<res<<" ";
  cout<<endl;
}

int main()
{
  int n ,k;
  cin >> n >> k;

  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin >> arr[i];
  }

  longsubarray(arr, n, k);
}
