Sort an array where a subarray of a sorted array is in reverse order
Given an array of N numbers where a subarray is sorted in descending order and rest of the numbers in the array are in ascending order. The task is to sort an array where a subarray of a sorted array is in reversed order. 

Examples: 



Input: 2 5 65 55 50 70 90 
Output: 2 5 50 55 65 70 90 
The subarray from 2nd index to 4th index is in reverse order. 
So the subarray is reversed, and the sorted array is printed. 





Input: 1 7 6 5 4 3 2 8 
Output: 1 2 3 4 5 6 7 8






#include<bits/stdc++.h>
using namespace std;

void rotatearray(int arr[] ,  int front  , int back )
{
  while(front < back)
  {
    swap(arr[front] , arr[back]);
  front++;
  back--;
  }
   
}

//it it used to find the front and back index which is starting and ending index which needs to be rotate 
void reversesubarray(int arr[] , int n)
{
  int front =-1, back =-1;
   // why we are starting it from index 1 and checking previous element is , we want to know that like from which element its getting increased and ending we start from n-2 index which is lastbefore element 
  for(int i=1; i<n;i++)
  {
    if(arr[i]<arr[i-1])
    {
      front =i-1;
      break;
    }
    
  }
  for(int i= n-2; i>=0; i--)
  {
    if(arr[i]>arr[i+1])
    {
       back = i+1;
    break;
    }
  }

  if(front ==   -1 && back==-1)
  {
    return ;
  }

  rotatearray(arr , front, back);
  
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
  reversesubarray(arr, n);

  for(int i=0; i<n; i++)
  {
    cout<< arr[i]<<" ";
  }


 
}
