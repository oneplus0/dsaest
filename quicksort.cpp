#include<iostream>
using namespace std;

int partition(int *arr, int start , int end){
    int pivot=arr[end];
    int paritionindex=start;
    for(int i=start;i<end;i++){
        if(arr[i]<=pivot){
            swap(arr[i],arr[paritionindex]);
            paritionindex++;
        }
    }
    swap(arr[paritionindex], arr[end]);
    return paritionindex;
}
void quicksort(int *arr, int start, int end){

    if(start<end){
        int partitionindex=partition(arr, start, end);
        quicksort(arr,start, partitionindex-1);
        quicksort(arr, partitionindex+1, end);
    }
}
int main(){


    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"_";
    }
}