#include <iostream>
using namespace std;

int binarysearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        cout << arr[mid] << endl;
        if (x==arr[mid])
        {
            return mid;
        }
        if (x >arr[mid])
        {
            return binarysearch(arr, mid + 1, r, x);
            
        }

        if (x < arr[mid])
        {
            return binarysearch(arr, 0, mid - 1, x);
        }
    }
    return -1;
}
int main()
{
    int n = 10;
    int arr[n] = {10, 19, 25, 39, 44, 56, 78, 100, 101, 119};
    int x = 100;

    int result = binarysearch(arr, 0, n - 1, x);
    if (result == -1)
    {
        cout << "element not found";
    }
    else
    {
        cout << "element found at index" <<   result;
    }
}
