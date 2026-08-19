Given an array of n integers and an integer k, the task is to find the number of subarrays such that all elements in each subarray are greater than k.

Examples: 

Input: arr[] = {3, 4, 5, 6, 7, 2, 10, 11}, k= 5 
Output: 6 
The possible subarrays are {6}, {7}, {6, 7}, {10}, {11} and {10, 11}.

Input: arr[] = {8, 25, 10, 19, 19, 18, 20, 11, 18}, k = 13 
Output: 12  



#include<bits/stdc++.h>
using namespace std;
int countsubarray(int arr[] , int k , int n)
{
  int count =0;

  for(int i=0; i<n; i++)
  {
    for(int j=i; j<n; j++)
    {
        if(arr[j]<=k)
        break;

      count++;
        
    }
  }

    return count;
}

int main()
{
  int n , k;
  cin >> n >> k;

  int arr[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  cout << countsubarray(arr, k  , n)<<endl;


}
