import java.util.*;

public class Main {

    // ~~~~~~~~~~~~~~~~~~~~~User Section~~~~~~~~~~~~~~~~~~~~~

    public static int[] sortedSquares(int[] nums) {
        // write your code here
        int i=0;
        int x=nums.length-1;
        int j=nums.length-1;
        int[] A=new int[nums.length];
        while(i<=j){
            if((nums[i]*nums[i])>(nums[j]*nums[j])){
                A[x--]=nums[i]*nums[i];
                i++;
            }else{
                A[x--]=nums[j]*nums[j];
                j--;
            }
        }
        return A;
    }

    // ~~~~~~~~~~~~~~~~~~~Input Management~~~~~~~~~~~~~~~~~~~

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] nums = new int[n];
        
        for(int i = 0; i < n; i++) 
            nums[i] = scn.nextInt();
        
        int[] res = sortedSquares(nums);

        for(int i = 0; i < n; i++) {
            System.out.print(res[i] + " ");
        }
    }
}