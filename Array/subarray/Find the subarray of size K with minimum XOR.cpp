Find the subarray of size K with minimum XOR

Given an array arr[] and integer K, the task is to find the minimum bitwise XOR sum of any subarray of size K in the given array.
Examples: 
 

Input: arr[] = {3, 7, 90, 20, 10, 50, 40}, K = 3 
Output: 16 
Explanation: The subarray {10, 50, 40} has the minimum XOR 
Input: arr[] = {15, 10, 10, 12}, K = 2 
Output: 0
Explanation: 
The subarray {10, 10} has the minimum XOR 



#include<bits/stdc++.h>
using namespace std;
 
int xorarray(int arr[] ,int target , int n)
{
  int mini = INT_MAX , sum=0;

  for(int i=0; i<=n-target; i++)
  {   sum =0;
    for(int j=i; j<target+i; j++)
    {
        sum ^= arr[j];

    }
    mini = min(mini , sum);
  }
  return mini;
}

int main()
{
  int n , target;
  cin >> n >> target;

  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin >> arr[i];
  }

  cout<<xorarray(arr , target , n);
}
