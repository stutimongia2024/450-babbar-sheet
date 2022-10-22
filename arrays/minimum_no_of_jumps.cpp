https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int i,maxreach,step,jump;
        if(n<=1)
        return 0;
        if(arr[0]==0)
        return -1;
        maxreach=arr[0];
        step=arr[0];
        jump=1;
        for(i=1;i<n;i++)
        {
            if(i==n-1)
            return jump;
            maxreach=max(maxreach,i+arr[i]);
            step--;
            if(step==0)
            {
                jump++;
                if(i>=maxreach)
                return -1;
                
                step=maxreach-i;
            }
        }
        return -1;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
 
