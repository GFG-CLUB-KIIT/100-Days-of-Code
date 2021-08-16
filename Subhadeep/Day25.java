import java.util.*;

public class Main {
    
    //~~~~~~~~~~~~~~~~User Section~~~~~~~~~~~~~~~~~
    public static ArrayList<Integer> majorityElement(int[] arr, int k) {
        // write yout code here
        
        ArrayList<Integer> ll=new ArrayList<>();
        Map<Integer ,Integer> m=new HashMap<>();
        for(int i: arr){
            if(m.containsKey(i)){
                m.put(i ,m.get(i)+1);
                
            }else{
                m.put(i ,1);
            }
        }
        for(int i: m.keySet()){
            if(m.get(i)>arr.length/k){
                    ll.add(i);
                }
        }
        Collections.sort(ll);
        return ll;
    }
    
    //~~~~~~~~~~~~~~~Input Management~~~~~~~~~~~~~~~
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = scn.nextInt();
        }
        int k = scn.nextInt();
        ArrayList<Integer> res = majorityElement(arr, k);
        System.out.println(res);
    }
}