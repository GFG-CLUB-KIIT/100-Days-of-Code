class Solution
{
    public static void sort012(int a[], int n)
    {
        // code here
        int zer=0;int on=0;int two=0;
        for(int i :a){
            if(i==0){
                zer++;
            }else if(i==1){
                on++;
            }else{
                two++;
            }
        }
        
        int i=0;
        while(i<zer){
            a[i]=0;
            i++;
        }
        while(on-->0){
            a[i]=1;
            i++;
        }
        while(two-->0){
            a[i]=2;
            i++;
        }
        
    }
}