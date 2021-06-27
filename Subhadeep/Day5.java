import java.util.Map.Entry;
class Solution {
    public List<List<Integer>> groupThePeople(int[] groupSizes) {
        List<List<Integer>> ll=new ArrayList<>();
        Map<Integer, List<Integer>> m=new HashMap<>();
        for(int i=0;i<groupSizes.length;i++){
            int a=groupSizes[i];
            if(m.containsKey(a)){
                m.get(a).add(i);
            }
            else{
                m.put(a ,new ArrayList<Integer>());
                m.get(a).add(i);
            }
        }
        
        for(Entry<Integer, List<Integer>> entry: m.entrySet()){
            int a=entry.getKey();
            List<Integer> b=entry.getValue();;
           
            if(b.size()<=a){
                ll.add(b);
            }
            else{
                 int i=0;
                 int j=0;
                List<Integer> al=new ArrayList<>();
                while(i<b.size()){
                    al.add(b.get(i));
                    j++;
                    if(j==a){
                        ll.add(new ArrayList(al));
                        al.clear();
                        j=0;
                    }
                    i++;
                }
            }
        }
        return ll;
    }
}