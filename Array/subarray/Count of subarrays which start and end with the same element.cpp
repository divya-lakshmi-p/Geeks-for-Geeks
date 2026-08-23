Count of subarrays which start and end with the same element
Given an array A of size N where the array elements contain values from 1 to N with duplicates, the task is to find the total number of subarrays that start and end with the same element.


Examples: 



Input: A[] = {1, 2, 1, 5, 2} 
Output: 7 
Explanation: 
Total 7 sub-array of the given array are {1}, {2}, {1}, {5}, {2}, {1, 2, 1} and {2, 1, 5, 2} are start and end with same element.
Input: A[] = {1, 5, 6, 1, 9, 5, 8, 10, 8, 9} 
Output: 14 
Explanation: 
Total 14 sub-array {1}, {5}, {6}, {1}, {9}, {5}, {8}, {10}, {8}, {9}, {1, 5, 6, 1}, {5, 6, 1, 9, 5}, {9, 5, 8, 10, 8, 9} and {8, 10, 8} start and end with same element. 







#include<bits/stdc++.h>
using namespace std;

int bigarray(int arr[] , int n)
{
  int count=0;
  for(int i=0; i<n; i++)
  {
    for(int j=i+1; j<n;  j++)
    {
       if(arr[i]==arr[j])
       {
        count++;
       }
    }
  }
  return count+n;
}


int main()
{
  int n;
  cin >> n;

  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin >>arr[i];
  }

  cout << bigarray(arr,  n);
}
