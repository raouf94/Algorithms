#include <stdio.h>
#include <string.h>

void countsort(int arr[], int n, int k)
{
    int output[n];

    //an array of integers of size 'k+1'
    int freq[k+1];
    memset(freq, 0, sizeof(freq));

    //store the number of each integer in 'freq'
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    //calculate the starting index for each integer
    int total = 0;
    for (int i = 0; i < k + 1; i++)
    {
        int oldCount = freq[i];
        freq[i] = total;
        total += oldCount;
    }

    //copy to output array, preserving order of entries with equal keys
    for (int i = 0; i < n; i++)
    {
        output[freq[arr[i]]] = arr[i];
        freq[arr[i]]++;
    }

    //copy the output array into the input array
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }   
    
}
 
int main()
{   
    int arr[] = { 31, 2, 12, 56, 34, 2, 89, 1, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 90;
    countsort(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
 
    return 0;
}