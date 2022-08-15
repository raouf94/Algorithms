#include <stdio.h>
void triFusion(int i, int j, int tab[], int tmp[]) {
    if (j <= i){return;}

    int m = (i + j) / 2;

    triFusion(i, m, tab, tmp); //sort the left half recursively
    triFusion(m + 1, j, tab, tmp); //sort the right half recursively
    int pg = i; //pg points to the start of the left subarray
    int pd = m + 1; //pd points to the start of the right subarray
    int c;

    //Loop from i to j to fill each element of the final marged array
    for(c = i; c <= j; c++) {
        if(pg == m + 1) {
            tmp[c] = tab[pd];
            pd++;
        }else if (pd == j + 1) {
            tmp[c] = tab[pg];
            pg++;
        }else if (tab[pg] < tab[pd]) {
            tmp[c] = tab[pg];
            pg++;
        }else {
            tmp[c] = tab[pd];
            pd++;
        }
    }
    for(c = i; c <= j; c++) { //copy elements from tmp[] to tab[]
        tab[c] = tmp[c];
    }
    
}

int main() {
    int nbr, i,tab[100], tmp[100];

    printf(" Enter the number of elements in the array: ");
    scanf("%d", &nbr);

    printf(" Enter %d intgers : ", nbr);

    for (i = 0; i < nbr; i++)
        scanf("%d", &tab[i]);
    
    triFusion(0, nbr-1, tab, tmp);

    printf("\n Sorted array: ");
    for(i = 0; i < nbr; i++) {
        printf(" %4d", tab[i]);
    }
    printf("\n");
  
    return 0;
}