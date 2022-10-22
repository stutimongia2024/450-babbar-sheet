https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        
        int i,minn,maxx,cur,smallest,largest;
        sort(arr,arr+n);
        cur=arr[n-1]-arr[0];
        smallest=arr[0]+k;
        largest=arr[n-1]-k;
        for(i=0;i<n-1;i++)
        {
            minn=min(smallest,arr[i+1]-k);
            maxx=max(largest,arr[i]+k);
            if(minn<0)
            continue;
            cur=min(cur,maxx-minn);
        }
        return cur;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
} 
