// quick sort
#include<bits/stdc++.h>
using namespace std;
void swap(int* arr,int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int* arr, int start,int end)
{
    int pivot=arr[end];
    int i=start-1;
    for(int j=start;j<end;j++)
    {
        if(pivot>arr[j])
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,end);
    return i+1;
}
void quicksort(int* arr,int start,int end)
{
    if(start<end)
    {
        int pi=partition(arr,start,end);
        quicksort(arr,start,pi-1);
        quicksort(arr,pi+1,end);
    }
}
int main()
{
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter array elelments: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"after sort array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}