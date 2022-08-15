#include<stdio.h>
int run = 32;

//this function sorts arrays from left index to right index which is of size atmost run
void inserstionSort(int arr[], int l, int r)
{
    int i, t, j;
    //Sorting the array using insertion sort 
    for (i = l+1; i <= r; i++)
    {
        //sorting the newly inserted element in a temporary variable "t"
        t = arr[i];
        for (j = i-1; j >= l; j--)
        {
            //swapping the elements if the left side element is greater than the new element
            if(t<arr[j])
                arr[j+1]=arr[j];
            else
                break;
        }
        arr[j+1]=t;
        

    }
       
}

//function to merge the sorted runs
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    //originaly array is divided into twe sub arrays
    int l1 = m - l + 1, l2 = r - m;
    int lft[l1], rght[l2];
    for(i=0; i < l1; i++)
        lft[i] = arr[l + 1];
    for(i=0; i < l2; i++)
        rght[i] = arr[m + 1 + i];

    i = 0;
    j = 0;
    k = 1;
    //after camparing, merging two sub arrays
    while (i < l1 && j < l2)
    {
        if (lft[i] <= rght[j])
        {
            arr[k] = lft[i];
            i++;
        }
        else
        {
            arr[k] = rght[j];
            j++;
        }
        k++;
        
    }

    //copying remaining elements of left sub array
    while (i < l1)
    {
        arr[k] = lft[i];
        k++;
        i++;
    }
    //copying remaining elements of right sub array
    while (j < l2)
    {
        arr[k] = rght[j];
        k++;
        j++;
    }   
    
}

//function to sort the array elements
void timSort(int arr[], int n)
{
    int i, size, left, right;
    //sorting individual subarrays of size run
    for (i = 0; i < n; i=i+run)
    {
        if((i+31)<(n-1))
            inserstionSort(arr, i, (i+31));
        else
            inserstionSort(arr, i, (n-1));
    }

    //start merging from run size
    for (size = run; size < n; size = 2*size)
    {
        for (left = 0; left < n; left = left+(2*size))
        {
            //finding ending point of left sub array
            int mid = left + size - 1;
            if ((left + 2*size - 1)<(n-1))     
                right=(left + 2*size - 1);
            else
                right = n-1;
            
            merge(arr, left, mid, right);
            
        }
        
    }   
    
}

void display(int arr[], int n)
{
    int i;
    for(i=0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int n, arr[20], i;
    printf("Enter the number of the elements: ");
    scanf("%d", &n);
    printf("Enter the arrays elements: ");
    for(i=0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("\nThe unsorted array is: \n");
    for (i = 0; i < n; i++)
        printf("%d ",arr[i]);

    //calling the function to sort the data
    timSort(arr, n);
    printf("\nAfter sorting array is\n");
    display(arr, n);

    return 0;
    
}