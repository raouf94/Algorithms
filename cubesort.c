
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>

//comparator function which returns a^3 is less than b^3

static int intCompara(const void *p1, const void *p2){
    int int_a = * ( (int*) p1 );
    int int_b = * ( (int*) p2 );

    int x = pow(int_a, 3);
    int y = pow(int_b, 3);

    if ( x == y) return 0;
    else if ( x < y ) return -1;
    else return 1;

}

//function to print the sorting array
void printIntegers(int arr[], size_t size){
    for (size_t i = 0; i < size; i++)
        printf("%4d | ", arr[i]);
    printf("\n");
}

int main(int argc, char *argv[]) {

    int arr2[] = {44, 65, 8, 13, 23, 89, 16, 6};

    int n = sizeof(arr2) / sizeof(arr2[0]);

    printIntegers(arr2, n);
    qsort(arr2, n, sizeof(int), intCompara); //qsort() is a function that used for sorted an array
    printIntegers(arr2, n);

    exit(EXIT_SUCCESS);
    
}