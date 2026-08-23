Given two numbers N and S, the task is to find the length of smallest subarray in range (1, N) such that the sum of those chosen numbers is greater than S.

Examples: 



Input: N = 5, S = 11 
Output: 3 
Explanation: 
Smallest subarray with sum > 11 = {5, 4, 3}





Input: N = 4, S = 7 
Output: 3 
Explanation: 
Smallest subarray with sum > 7 = {4, 3, 2} 




#include<bits/stdc++.h>
using namespace std;

int longarray(vector<int>v , int target, int n)
{
  int  sum =0 , mini = INT_MAX;
  for(int i=0; i<n; i++)
  {
    for(int j=i; j<n;  j++)
    {   sum =0;
      for(int k=i; k<=j; k++)
      {
        sum += v[k];
      }
      if(sum > target)
      { 
        mini = min(mini , j-i+1);
        
      }
    }
  }
  return mini;
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
