Count of subarrays with sum at least K

Given an array arr[] of size N and an integer K > 0. The task is to find the number of subarrays with sum at least K.
Examples: 
 



Input: arr[] = {6, 1, 2, 7}, K = 10 
Output: 2 
{6, 1, 2, 7} and {1, 2, 7} are the only valid subarrays.
Input: arr[] = {3, 3, 3}, K = 5 
Output: 3 




#include<bits/stdc++.h>
using namespace std;

int longarray(vector<int>v , int target, int n)
{
  int  sum =0 , count=0;
  for(int i=0; i<n; i++)
  {
    for(int j=i; j<n;  j++)
    {   sum =0;
      for(int k=i; k<=j; k++)
      {
        sum += v[k];
      }
      if(sum >= target)
      {
        count++;
      }
    }
  }
  return count;
}

int main()
{
  int n,target;
  cin >> n >> target;

  vector<int>v(n);
  for(int i=0; i<n; i++)
  {
    cin >> v[i];
  }

  cout<< longarray(v , target ,n);

}
