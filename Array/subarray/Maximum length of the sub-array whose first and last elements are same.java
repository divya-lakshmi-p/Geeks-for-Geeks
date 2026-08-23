Maximum length of the sub-array whose first and last elements are same
Last Updated :
11 Jul, 2025
Given a character array arr[] containing only lowercase English alphabets, the task is to print the maximum length of the subarray such that the first and the last element of the sub-array are same.

Examples: 

Input: arr[] = {'g', 'e', 'e', 'k', 's'} 
Output: 2 
Explanation: {'e', 'e'} is the maximum length sub-array satisfying the given condition.

Input: arr[] = {'a', 'b', 'c', 'd', 'a'} 
Output: 5 
Explanation: {'a', 'b', 'c', 'd', 'a'} is the required sub-array .








#include<bits/stdc++.h>
using namespace std;
int subarrayy(char arr[] , int n)
{
  int maxi = INT_MIN ,j;
  for(int i=0; i<n; i++)
  {
    for( j=n-1; j>0; j--)
    {
      if(arr[i]==arr[j])
      {
        break;
      }

    }

      maxi = max(maxi , j-i+1);
  }
  return maxi;
}
int main()
{
  int n;
  cin >> n;

  char arr[n];
  for(int i=0; i<n; i++)
  {
    cin >> arr[i];
  }

  cout << subarrayy(arr, n);
}
//Both are same bbut only small changes while taking count ;


#include<bits/stdc++.h>
using namespace std;

void startindex(char arr[] , int n)
{ 
  int maxi =INT_MIN;
   for(int i=0; i<n; i++)
   {  
    for(int j =n-1; j>0;  j--)
    {    
       if(arr[i] == arr[j])
       {
          int count = j-i+1;
           maxi = max(count , maxi);
         break;
       }
    }
      
   }
    cout<<endl;
   cout<<maxi<<" "<<endl;
}

int main()
{
    int  n;
    cin >> n ;

    char arr[n];

    for(int i=0; i<n; i++)
    {
      cin >> arr[i];
    }

    startindex(arr , n);
}





Java 



import java.util.Scanner;

class Main
{
    static int splitarray(char [] arr , int n)
    {   int totalsum =Integer.MIN_VALUE , j;
        for(int i=0; i<n; i++)
        {
            for( j=n-1; j>i; j--)
        {
           

            if(arr[i] == arr[j])
            {   totalsum = java.lang.Math.max(totalsum, j-i+1);
                break;
            }
           
        }
        
    }
        return totalsum;
    }
    public static void main(String [] args)
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        char [] arr = new char[n];

        for(int i=0; i<n; i++)
        {
            arr[i] = sc.next().charAt(0);
        }

        System.out.println(splitarray(arr, n));
    }
}
