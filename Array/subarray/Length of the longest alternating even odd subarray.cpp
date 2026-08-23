Given an array arr[], return the maximum possible length of a subarray such that its elements are arranged alternately either as even and odd or odd and even.

Examples: 

Input: arr[] = [10, 12, 14, 7, 8]
Output: 3 
Explanation: The max length of subarray is 3 and the subarray is [14, 7, 8]. Here the array starts as an even element and has odd and even elements alternately. 

Input: arr[] = [4, 6]
Output: 1 
Explanation: The array contains [4, 6]. So, we can only choose 1 element as that will be the max length subarray.




#include<bits/stdc++.h>
using namespace std;
void longsub(vector<int>v , int n)
{
  int count =1 , maxlen =1;

  for(int i=1; i<n; i++)
  {
    if((v[i]%2) != (v[i-1]%2))
    {
      count++;
    }
    else
    {
      count =1;
    }

    maxlen = max(maxlen , count);
  }
cout<<maxlen;

}

int main()
{
  int n;
  cin >> n;
  
  vector<int>v(n);
  for(int i=0; i<n; i++)
  {
    cin >> v[i];
  }

  longsub(v , n);
}
