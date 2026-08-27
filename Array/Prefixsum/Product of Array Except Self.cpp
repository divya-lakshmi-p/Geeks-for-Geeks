Given an array arr[] of n integers, construct a product array res[] (of the same size) such that res[i] is equal to the product of all the elements of arr[] except arr[i]. 

Example: 

Input: arr[] = [10, 3, 5, 6, 2]
Output: [180, 600, 360, 300, 900]
Explanation: 
For i=0, res[i] = 3 * 5 * 6 * 2 is 180.
For i = 1, res[i] = 10 * 5 * 6 * 2 is 600.
For i = 2, res[i] = 10 * 3 * 6 * 2 is 360.
For i = 3, res[i] = 10 * 3 * 5 * 2 is 300.
For i = 4, res[i] = 10 * 3 * 5 * 6 is 900.

Input: arr[] = [12, 0]
Output: [0, 12]
Explanation: 
For i = 0, res[i] = 0.
For i = 1, res[i] = 12.


#include<bits/stdc++.h>
using namespace std;

void productarray(int arr[] , int n)
{
  vector<int>pref(n), suf(n), ans(n);

  pref[0] =1, suf[n-1] =1;

  
  for(int i=1; i<n; i++)
  {
    pref[i] =pref[i-1] *arr[i-1];
  }

  for(int i=n-2; i>=0; i--)
  {
    suf[i] = suf[i+1] * arr[i+1];
  }


  for(int i=0; i<n; i++)
  {
    ans[i] = pref[i] * suf[i];

    cout<<ans[i]<< " ";
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

  productarray(arr , n);
}








#include<bits/stdc++.h>
using namespace std;

void productarray(int arr[] , int n)
{
  int zerocount =0 , index = 0 , product =1;
  vector<int>ans(n);

  for(int i=0; i<n; i++)
  {
    if(arr[i]!=0)
    {
      product *= arr[i];
    }
    else{
          zerocount++;
          index=i;
    }
  }

  for(int i=0; i<n; i++)
  {
    if(zerocount==0)
    {
      ans[i] = product/arr[i];
    }
    else if(zerocount == 1)
    {
      ans[index] = product;
    }
  }

  for(int x:ans)
  {
    cout<< x<<" ";
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
  productarray(arr, n);
}  






