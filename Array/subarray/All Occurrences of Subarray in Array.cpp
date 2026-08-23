Yu are given two integer arrays a[] and b[]. Return all the starting indexes of all the occurrences of b[] as a subarray in a[].

Examples: 

Input: a[] = [2, 4, 1, 0, 4, 1, 1], b[] = [4, 1]
Output: [1, 4]
Explanation: b[] occurs as a subarray in a[] from index 1 to 2 and from index 4 to 5.

Input: a[] = [2, 4, 1, 0, 0, 3], b[] = [0]
Output: [3, 4]
Explanation: b[] occurs as a subarray in a[] from index 3 to 3 and from index 4 to 4.





#include<bits/stdc++.h>
using namespace std;

vector<int>originalarray(int a[] , int b[] , int n,int m)
{
  vector<int>res;
  bool glaf = true;

  for(int i=0; i<n-m+1; i++)
  {
    glaf = true;
      for(int j=0; j<m; j++)
      {
          if(a[i+j] != b[j])
          {
            glaf = false;
            break;
          }
      }
      if(glaf)
      {
        res.push_back(i);
      }

  }
  
  return res;

}

int main()
{
  int n , m;
  cin >> n >> m;

  int a[n] , b[m];
  for(int i=0; i<n; i++)
  {
    cin >> a[i];
  }
  for(int j=0; j<m; j++)
  {
    cin >> b[j];
  }

  vector<int>res = originalarray(a ,b,n ,m);
  for(int x:res)
  {
    cout<<x<<" ";
  }
  cout<<endl;
}
