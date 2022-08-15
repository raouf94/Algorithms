#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void heap_sort(int *num_array, int n)
{
    int i; 
    int hi;// to cut the lenght of the array one by one

    hi = 0;
    while (hi < n - 1) 
    {
        //create a heap
        i= 0;
        while (i < n - hi)
        {
            if(num_array[i] > num_array[(i - 1) / 2])//(i-1)/2 is the parent index with i chlid index
            {
                swap(&num_array[i], &num_array[(i -1) / 2]);
                i = 0;
                continue;
            }
            i++;
        }
        swap(&num_array[n - hi - 1], &num_array[0]);
        hi++;
        
    }
    
}

void print_num_array(int *num_array, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        printf("%d ", num_array[i]);
        i++;
    }
    printf("\n");
    
}

int main(void)
{
    int num_array[] = {43, 8, 6, 58, 142, 14, 985, -5, 87, 548, 1, 68};
    int num;

    num = sizeof(num_array) / sizeof(int);

    printf(".........Before sorting.............\n");
    print_num_array(num_array, num);
    heap_sort(num_array, num);
    printf(".........After sorting.............\n");
    print_num_array(num_array, num);

    return (0);
}