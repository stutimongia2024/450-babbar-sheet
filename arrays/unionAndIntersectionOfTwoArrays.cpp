[https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1](https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1)

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        set<int> s;
        int k = 0;
        for (int i = 0; i < n; i++) 
            s.insert(a[i]);
        
        for (int i = 0; i < m; i++) 
            s.insert(b[i]);
            
             set<int> q;
     
    //  Insert the elements of arr1[] to set s
    for (int i = 0; i < n; i++)
    {
        q.insert(a[i]);
    }
     
    cout << "Intersection:" << endl;
     
    for (int i = 0; i < m; i++)
    {
        if(q.count(b[i]))
        {
            cout<<b[i]<<" ";
        }
    }
         
    cout <<endl;
        
        return s.size();
    }
};
