#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int a=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=a;
            }
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
    bubblesort(arr,n);
}