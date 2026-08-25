Given an array arr[] consisting of n integers, find all the array elements which occurs more than floor(n/3) times. Return the resulting array in strictly increasing order. If no such elements exist, return an empty array.

Examples:

Input: arr[] = [2, 2, 3, 1, 3, 2, 1, 1]
Output: [1, 2]
Explanation: The frequency of 1 and 2 is 3, which is more than floor n/3 (8/3 = 2).
Input:  arr[] = [-5, 3, -5]
Output: [-5]
Explanation: The frequency of -5 is 2, which is more than floor n/3 (3/3 = 1).
Input:  arr[] = [3, 2, 2, 4, 1, 4]
Output: []
Explanation: There is no majority element.
Constraint:
1 ≤ arr.size() ≤ 106
-105 ≤ arr[i] ≤ 105









class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // code here
        
        map<int  ,int>v; 
        int sum = floor(arr.size()/3);
        vector<int>ans;
        
        for(int i=0; i<arr.size(); i++)
        {
             v[arr[i]]++;
        }
        for(auto x:v)
        {
            if(x.second>sum)
            {
                    ans.push_back(x.first);
            }
        
        }
        
        return ans;
        
    }
};
