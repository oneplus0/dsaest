#include <iostream>
#include <climits>
using namespace std;

int findmax(int arr[], int n)
{
    int a = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > a)
        {
            a = arr[i];
        }
    }

    return a;
}
void countingsort(int arr[], int n)
{

    int max = findmax(arr, n)+1;

    int a[max];
    for (int i = 0; i < max; i++)
    {
        a[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        a[arr[i]]++;
    }

int i = 0, j = 0;
    while (j < max) {  // Changed the condition from max+1 to max
        if (a[j] > 0) {
            arr[i++] = j;  // Place the elements back into the original array
            a[j]--;
        }
        else {
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"_";
    }

}
int main()
{

    int arr[] = {4, 12, 1, 15, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    countingsort(arr, n);


   
}