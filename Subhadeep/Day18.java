//first repeating element
public class Solution {
    public int solve(int[] A) {
        int ans=-1;
        int min=Integer.MAX_VALUE;
        Map<Integer, Integer> m=new HashMap<>();
        for(int i=0;i<A.length;i++){
            if(m.containsKey(A[i])){
                int t=m.get(A[i]);
                if(t<min){
                    min=t;
                    ans=A[i];
                }
            }else{
                m.put(A[i] ,i);
            }
        }
        return ans;
    }
}
