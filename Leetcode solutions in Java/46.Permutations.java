Leetcode - 46. Permutations
https://leetcode.com/problems/permutations/



class Solution {
    List<List<Integer>> arr=new LinkedList<List<Integer>>();
    
    public List<List<Integer>> permute(int[] n) {
        List<Integer> ar=new LinkedList<Integer>();
        boolean b[]=new boolean[n.length];
        traversal(ar,b,n);
        return arr;
    }
    public void traversal(List<Integer> ar,boolean[] vis, int[] n){
        if(ar.size()==n.length){
            arr.add(new LinkedList<>(ar));
            return;
        }
        
        for(int i=0;i<vis.length;i++){
            if(!vis[i]){
                vis[i]=true;
                ar.add(n[i]);
                traversal(ar,vis,n);
                vis[i]=false;
                ar.remove(ar.size()-1);
            }
        }
    }
}
