Given an array of integers arr[], determine whether it is possible to split it into two contiguous subarrays (without reordering the elements) such that the sum of the two subarrays is equal.

Input : arr[] = [1 , 2 , 3 , 4 , 5 , 5]
Output : true
Explanation :The array can be divided after index 3 into two subarrays: [1, 2, 3, 4] and [5, 5].

Input : arr[] = [4, 3, 2, 1]
Output : false
Explanation: No possible split gives equal sum.



#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin >> arr[i];
  }
   bool flag = false;
  for(int i=0; i<n; i++)
  {
    int leftsum =0  , rightsum =0;

    for(int j=0; j<=i; j++)
    {
      leftsum += arr[j];
    }

    for(int k=i+1; k<n; k++)
    {
      rightsum += arr[k];
    }

    if(leftsum == rightsum)
    {
      flag = true;
      
    }

    

  }

  if(flag)
    cout<<"True";
  else
  cout<<"false";


}
