//Subarray with given sum
class Solution
{
    //Function to find a continuous sub-array which adds up to a given number.
    static ArrayList<Integer> subarraySum(int[] arr, int n, int s) 
    {
        Map<Integer ,Integer> m=new HashMap<>();
        ArrayList<Integer> ll=new ArrayList<>();
        int sum=0;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum-s==0){
                ll.add(1);
                ll.add(i+1);
                break;
            }
            if(m.containsKey(sum-s)){
                ll.add(m.get(sum-s)+1);
                ll.add(i+1);
                break;
            }
            
            m.put(sum ,i+1);
            
        }
        if(ll.isEmpty()){
            ll.add(-1);
            return ll;
        }
        return ll;
        // Your code here
    }
}