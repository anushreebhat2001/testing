#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int maxRepeating(int* arr, int n, int k)
{
    // Iterate though input array, for every element
    // arr[i], increment arr[arr[i]%k] by k
    for (int i = 0; i< n; i++)
        arr[arr[i]%k] += k;

    // Find index of the maximum repeating element
    int max = arr[0], result = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            result = i;
        }
    }

       for (int i = 0; i< n; i++)
          arr[i] = arr[i]%k; //original array

    // Return index of the maximum element
    return result;
}

// Driver program to test above function
int main()
{
    int arr[] = {1,2,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 8;

    cout << "The maximum repeating number is " <<
         maxRepeating(arr, n, k) << endl;

    return 0;
}
