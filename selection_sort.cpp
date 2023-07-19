#include<iostream>
using namespace std;

void insertionsort(int arr[], int n){
    int j,k;
    for(int i=0;i<n-1;i++){
        for( j=k=i;j<n;j++){
                if(arr[k]>arr[j]){
                    k=j;
                }
        }
        if(k!=i){
        int a;
        a=arr[k];
        arr[k]=arr[i];
        arr[i]=a;
        }
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<"_";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertionsort(arr,n);
}