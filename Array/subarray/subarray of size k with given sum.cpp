Given an array arr[], an integer K and a Sum. The task is to check if there exists any subarray with K elements whose sum is equal to the given sum. If any of the subarray with size K has the sum equal to the given sum then print YES otherwise print NO.

Examples: 

Input: arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20}
        k = 4, sum = 18
Output: YES
Subarray = {4, 2, 10, 2}

Input: arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20}
        k = 3, sum = 6
Output: YES

#include<bits/stdc++.h>
using namespace std;

bool subsum(int arr[] , int n, int k ,  int sum)
{   
   for(int i=0; i<=n-k; i++)
  {
    int total =0;
    for(int j=i; j<i+k; j++)
    {
       total += arr[j];
    }
    if(total == sum)
    {
      return true;
    }
  }
 return false;
}

int main()
{
  int n,k,sum;
  cin >> n >> k >> sum;

  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }

  cout << subsum(arr, n ,k,  sum)<<endl;
 
}
