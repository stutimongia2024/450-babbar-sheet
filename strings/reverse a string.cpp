[https://leetcode.com/problems/reverse-string/submissions/](https://leetcode.com/problems/reverse-string/submissions/)

//Source Code:
 
 class Solution {
public:
    void reverseString(vector<char>& s) {
        int temp, start=0, end= s.size()-1;
        while(start<=end){
            temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;end--;
            
        }
    
    }
};
