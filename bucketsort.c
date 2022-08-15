#include <stdio.h>

//function to get the maximun from an array
int getMax(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
        max = a[i];
    return max;
}

//bucket sort function
void bucket(int a[], int n)
{
    int max = getMax(a, n);//max is the maximum of tha array elements
    int bucket[max], i, j;
    for (i = 0; i <= max; i++)
    {
        bucket[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        bucket[a[i]]++;
    }
    for (i = 0, j = 0; i <= max; i++)
    {
        while (bucket[i] > 0)
        {
            a[j++] = i;
            bucket[i]--;
        }
        
    }   
    
}

//function to display
void printArr(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {

    int array[100], i, num;

    printf("Enter the size of array : ");
    scanf("%d", &num);

    printf("Enter the %d elements to be sorted:\n", num);
    for(i=0; i<num; i++)
        scanf("%d", &array[i]);
    
    bucket(array, num);
    printf("\nafter sorting: \n");
    printArr(array, num);
}