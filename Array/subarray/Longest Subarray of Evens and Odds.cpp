Longest Subarray of Evens and Odds


Given an array arr[], return the maximum possible length of a subarray such that its elements are arranged alternately either as even and odd or odd and even.

Examples:

Input: arr[] = [10, 12, 14, 7, 8]
Output: 3
Explanation: The max length of subarray is 3 and the subarray is [14, 7, 8]. Here the array starts as an even element and has odd and even elements alternately.
Input: arr[] = [4, 6]
Output: 1
Explanation: The array contains [4, 6]. So, we can only choose 1 element as that will be the max length subarray.
Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ 103



C++

  class Solution {
  public:
    int maxEvenOdd(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        
        int count =1, maxsum =1;
        
        for(int i=0; i<n-1; i++)
        {
            if((arr[i]%2==0 && arr[i+1]%2 !=0) || (arr[i]%2!=0 && arr[i+1]%2==0))
            {
                count++;
            }
              //if the chain breaks we will check with the maxsum and store it then again we will start the count from 1
            else
            {
                count =1;
            }
            
            maxsum = max(maxsum , count);
        }
        
        return maxsum;
    }
};



Java 


class Solution {
    public static int maxEvenOdd(int[] arr) {
        //  code here
        
        int count=1, maxsum =1 , n = arr.length;
        
        for(int i=0; i<n-1;i++)
        {
            if((arr[i]%2==0 && arr[i+1]%2!=0) || (arr[i]%2!=0 && arr[i+1]%2==0))
            {
                count++;
            }
            else
            {
                count =1;
            }
            
            maxsum = java.lang.Math.max(maxsum , count);
        }
        
        return maxsum;
    }
}
