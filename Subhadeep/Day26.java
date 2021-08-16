import java.util.*;

public class Main {
    
    //~~~~~~~~~~~~~~~~~User Section~~~~~~~~~~~~~~~
    public static int[] productExceptSelf(int[] arr) {
        // write your code here
        int[] left=new int[arr.length];
        int[] right=new int[arr.length];
        int[] ans=new int[arr.length];
        left[0]=arr[0];
        right[arr.length-1]=arr[arr.length-1];
        for(int i=1;i<arr.length;i++){
            left[i]=left[i-1]*arr[i];
        }
        for(int i=arr.length-2;i>=0;i--){
            right[i]=right[i+1]*arr[i];
        }
        for(int i=0;i<arr.length;i++){
            if(i==0){
                ans[i]=right[i+1];
            }else if(i==arr.length-1){
                ans[i]=left[i-1];
            }else{
                ans[i]=left[i-1]*right[i+1];
            }
        }
        
        return ans;
    }

    //~~~~~~~~~~~~~~~~~Input Management~~~~~~~~~~~~~~~
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = scn.nextInt();
        }
        int[] res = productExceptSelf(arr);
        for(int i = 0; i < arr.length; i++) {
            System.out.print(res[i] + " ");
        }
    }
}