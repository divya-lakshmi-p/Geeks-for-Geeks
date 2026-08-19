Given an array of non - negative integers and a number K., The task is to check if any subarray with product K is present in the array or not.

Examples: 

Input: arr[] = {1, 2, 3, 4}, K = 6
Output: YES

Input: arr[] = {2, 0, 4, 5}, K = 20
Output: YES

optimised verison 

TC: o(n)
#include<bits/stdc++.h>
using namespace std;

bool splitarray(int n , int k)
{ int sum=0;
  for(int i=0; i<n; i++)
  { 
    int x;
    cin >> x;
     
    sum += x;
    if(sum == k)
     return true;
  }

  return false;

}

int main()
{
  int n , k;
  cin >> n >> k;
  
  
  cout << boolalpha <<splitarray(n, k);
}



my thinking first


#include<bits/stdc++.h>
using namespace std;

bool splitarray(vector<int>v, int n , int k)
{
  for(int i=0; i<n; i++)
  {
    if(v[i] == k)
     return true;
  }

  return false;

}

int main()
{
  int n , k;
  cin >> n >> k;
  
  int arr[n];
  vector<int>v(n);
  int sum =0;
  for(int i=0;i<n; i++)
  {
    cin >> arr[i];
    sum += arr[i];

     v[i] = sum;
  }
  cout << boolalpha <<splitarray(v, n, k);
}




2nd version 


#include<bits/stdc++.h>
using namespace std;

bool splitarray(vector<int>v, int n , int k)
{
  for(int i=0; i<n; i++)
  {
    if(v[i] == k)
     return true;
  }

  return false;

}

int main()
{
  int n , k;
  cin >> n >> k;
  
  int arr[n];
  for(int i=0;i<n; i++)
  {
    cin >> arr[i];
  }

  vector<int>v(n);
  int sum =0;
  for(int i=0; i<n; i++)
  {
    
     sum += arr[i];

     v[i] = sum;

  }
  for(int x:v)
  {
    cout<<x<<" ";
  }
  cout << boolalpha <<splitarray(v, n, k);
} which one is bestt
