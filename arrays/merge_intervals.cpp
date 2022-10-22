https://leetcode.com/problems/merge-intervals/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    long long maxSubarraySum(int arr[], int n){
        
       int  sum=arr[0];
       int maxsum=arr[0];
        for(int i=1;i<n;i++)
        {
            sum=max(sum+arr[i],arr[i]);
            maxsum=max(sum,maxsum);
        }
        return maxsum;
        
    }
};


int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  
