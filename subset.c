#include <stdio.h>
 
/*Finction pour generer le sous-ensemeble*/
void subset(int arr[], int data[], int start, int end, int index, int r)
{
    int j, i;
    if (index == r)
    {
        for (j= 0; j < r; j++)
        {
            printf("%d", data[j]);
        }
        printf("\n");
        return;
        
    }
    for (i = start; i <= end && end - i + 1 >= r- index; i++)
    {
        data[index] = arr[i];
        subset(arr, data, i+1, end, index+1, r);
    }
    
    
}

/*Fonction pour afficher les sous-ensemble*/

void printsubset(int arr[], int n, int r)
{
    int data[r];
    subset(arr, data, 0, n - 1, 0, r);
}

int main()
{

    int arr[20], k, n, i;

    printf("Entrez le nombre d'entrees: \n");
    scanf("%d", &n);

    printf("Entrez les nombres entiers avec espaces: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entrez la valeur de k: \n");
    scanf("%d", &k);
    printf("Le sous-ensemble avec %d elements sont : \n", k);
    printsubset(arr, n, k);
    
    return 0;
}