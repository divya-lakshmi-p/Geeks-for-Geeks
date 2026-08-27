You are given an array arr[] consisting of n positive integers and a set of q queries represented by a 2D array queries queries[][]. Each query contains two integers l and r, indicating a range of indices in the array.

For every query, calculate the mean of the elements in the subarray from index l to index r (inclusive). After computing the mean, return its floor value.

Examples: 

 Input: arr[] = [3, 7, 2, 8, 2] , queries[][] = [[0,1], [1, 3], [2, 4]]
Output: 5 5 4
Explanation: 
For query [0, 1] - Elements in the range are [3, 7], Mean is (3+7)/2 = 5, Floor value is 5.
For query [1, 3] - Elements in the range are [7, 2, 8], Mean is (7+2+8)/3 = 5.6, Floor value is 5.
For query [2, 4] - Elements in the range are [2, 8, 2], Mean is (2+8+2)/3 = 4, Floor value is 4.

 Input: arr[] = [10, 20, 30, 40, 50, 60], queries[][] = [[3, 5]]
Output: 50
Explanation: For query [3, 5] - Elements in the range are [40, 50, 60], Mean is (40+50+60)/3 = 50, Floor value is 50.









#include<bits/stdc++.h>
using namespace std;
void prefivalue(int arr[] , int n)
{
  int a[n];
  a[0]=arr[0];
  for(int i=1; i<n; i++)
  {
    a[i] = a[i-1]+arr[i];
  }
  int q , ans=0;
  cin >> q;

  while(q--)
  { 
    int left , right;
    cin >> left >> right;
      int sum =0;
    for(int i=left; i<right; i++)
    {
      sum += (left==0)?a[right]:(a[right] - a[left-1]);
    }
    ans = floor(sum/(right-left+1));
  }
  cout<< ans<<" "<<endl;
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
  prefivalue(arr , n);
}
