You are given a prefix sum array presum[] of an array arr[]. The task is to find the original array arr[] whose prefix sum is presum[].

Examples: 

Input:  presum[] = {5, 7, 10, 11, 18}
Output: [5, 2, 3, 1, 7]
Explanation: Original array {5, 2, 3, 1, 7} 
Prefix sum array = {5, 5+2, 5+2+3, 5+2+3+1, 5+2+3+1+7} = {5, 7, 10, 11, 18}
Each element of original array is replaced by the sum of the prefix of current index.

Input: presum[] = {45, 57, 63, 78, 89, 97}
Output: [45, 12, 6, 15, 11, 8] 

The problem can be solved using the following observation:

Given a prefix sum array presum[] and the original array arr[] of size n, the prefix sum array is calculated as:

presum[0] = arr[0]
presum[i] = arr[0] + arr[1] + ... + arr[i] for all i in the range [1, N-1]
This means: presum[i] = presum[i-1] + arr[i]. Hence, the original array elements can be calculated as:

arr[0] = presum[0]
For all i in the range [1, n-1], arr[i] = presum[i] - presum[i-1]
Steps to Solve:

Traverse the presum[] array starting from the beginning.
If the index i = 0, then arr[i] = presum[i].
Else, for all i > 0, arr[i] = presum[i] - presum[i-1].






#include<bits/stdc++.h>
using namespace std;
void originalarray(int arr[] , int n)
{
  vector<int>original(n);
  original[0] = arr[0];
  for(int i=1; i<n; i++)
  {
      original[i] = arr[i] - arr[i-1];
  }


  for(int x:original)
  {
    cout<<x<<" ";
  }
  cout<<endl;
}
int main()
{
  int n;
  cin >> n;

  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin >> arr[i];
  }

  originalarray(arr,n);
}
