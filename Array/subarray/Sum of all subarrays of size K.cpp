Given an array arr[] and an integer K, the task is to calculate the sum of all subarrays of size K.

Examples: 



Input: arr[] = {1, 2, 3, 4, 5, 6}, K = 3 
Output: 6 9 12 15 
Explanation: 
All subarrays of size k and their sum: 
Subarray 1: {1, 2, 3} = 1 + 2 + 3 = 6 
Subarray 2: {2, 3, 4} = 2 + 3 + 4 = 9 
Subarray 3: {3, 4, 5} = 3 + 4 + 5 = 12 
Subarray 4: {4, 5, 6} = 4 + 5 + 6 = 15





Input: arr[] = {1, -2, 3, -4, 5, 6}, K = 2 
Output: -1, 1, -1, 1, 11 
Explanation: 
All subarrays of size K and their sum: 
Subarray 1: {1, -2} = 1 - 2 = -1 
Subarray 2: {-2, 3} = -2 + 3 = -1 
Subarray 3: {3, 4} = 3 - 4 = -1 
Subarray 4: {-4, 5} = -4 + 5 = 1 





#include<bits/stdc++.h>
using namespace std;

vector<int>longarray(vector<int>v , int target, int n)
{
   vector<int>res;
  int  sum =0 , mini = INT_MAX;
  for(int i=0; i<n-target+1; i++)
  {   sum =0;
    for(int j=i; j<target+i;  j++)
    {  
      sum +=v[j];
    }
     res.push_back(sum);
  }
  
 return res;
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

   vector<int>res = longarray(v , target ,n);

   for(int x: res)
   {
    cout<<x<<" ";
   }

}
