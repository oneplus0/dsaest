#include<iostream>
using namespace std;

void merge(int array[], int const left, int const mid, int const right){
    
    auto const subarrayone=mid-left+1;
    auto const subarraytwo=right-mid;
    
    auto *leftarray= new int[subarrayone];
    auto *rightarray= new int[subarraytwo];
    
    for(auto i=0; i<subarrayone; i++){
        leftarray[i]=array[left+i];
        
    }
    for(auto j=0;j<subarraytwo;j++){
        rightarray[j]=array[mid+1+j];
    }
    
    auto indexofsubarrayone=0, indexofsubarraytwo=0;
    int indexofmergedArray=left;
    
    while(indexofsubarrayone<subarrayone && indexofsubarraytwo< subarraytwo){
        if(leftarray[indexofsubarrayone]<=rightarray[indexofsubarraytwo]){
            array[indexofmergedArray]=leftarray[indexofsubarrayone];
        }
        else{
            array[indexofmergedArray]=rightarray[indexofsubarraytwo];
            
        }
        indexofmergedArray++;
    }
    
    while(indexofsubarrayone<subarrayone){
        array[indexofmergedArray]=leftarray[indexofsubarrayone];
        indexofsubarrayone++;
        indexofmergedArray++;
        
    }
    
    while(indexofsubarraytwo<subarraytwo){
        array[indexofmergedArray]=rightarray[indexofsubarraytwo];
        indexofsubarraytwo++;
        indexofmergedArray++;
    }
    delete[] leftarray;
    delete[] rightarray;
    
}

void mergeSort(int array[], int const begin, int const end ){

    if(begin>=end)
        return;
    
    auto mid= begin +(end-begin)/2;  
    mergeSort(array,begin, end);
    mergeSort(array, mid+1, end);
    merge(array, begin , mid, end);
}
void printarray(int array[], int size){
    for(auto i=0;i<size;i++){
        cout<<array[i];
    }
    
}
int main(){
    //int n=5;
    //cin>>n;
    // int array[n];
    // for(int i=0;i<n;i++){
    //     cin>>array[i];
    // };
   // int array[5]={102,93,193,709,170};

    int array[] = { 12, 11, 13, 5, 6, 7 };
    auto n = sizeof(array) / sizeof(array[0]);
 
    mergeSort(array, 0, n-1);
    printarray(array,n);
    cout<<"hello";

    
}