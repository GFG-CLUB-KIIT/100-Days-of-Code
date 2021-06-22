import java.util.*;
class Solution {
    static List<List<Integer>> ll=new ArrayList<>();
    static void helper(int[] candidates, int target ,List<Integer> al, int idx ){
        if(target==0){
            ll.add(new ArrayList(al));
            return;
        }
        if(target<0){
            return;
        }
        
        for(int i=idx;i<candidates.length;i++){
            al.add(candidates[i]);
            helper(candidates, target-candidates[i], al ,i);
            al.remove(al.size()-1);
        }
    }
    static List<List<Integer>> combinationSum(int[] candidates, int target) {
        helper(candidates, target, new ArrayList<>(), 0);
        return ll;
    }

    public static void main(String[] args) {
        int[] arr={2,3,6,7};
        int t=7;
        List<List<Integer>> al=new ArrayList<>();
        al=combinationSum(arr, t);
        for(List<Integer> a: al){
            for(int i: a){
                System.out.print(i +" ");
            }
            System.out.println();
        }
    }
}