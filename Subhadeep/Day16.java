import java.util.*;
class ja{
    static int bsearch(int arr[] ,int x ,int l, int r){
        int mid=(l+r)/2;
        if(l>r){
            return -1;
        }
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            return bsearch(arr, x, l, mid-1);
        }else{
            return bsearch(arr ,x ,mid+1, r);
        }
    }
    static int bsearch1(int arr[], int x){
        int l=0;
        int r=arr.length-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==x){
                return mid;
            }else if(arr[mid]<x){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return -1;
    }
    public static void main (String[] args) {
        int arr[]={1,3,5,7,8,10};
        System.out.println(bsearch1(arr ,3));
    }
}