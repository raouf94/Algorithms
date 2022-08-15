#include <stdio.h>
#define SIZE 10

int main()
{
  int tab[10] = {4, 89, 8, 18, 60, 28, 42, 3, 58, 8};
  int i, j, tmp;

  //display the elements of the array
  for (i = 0; i < SIZE; i++)
  {
    printf("%4d", tab[i]);
  }

  //sor SIZE (10) items to sort, bubble sort does SIZE - 1 (10 - 1) to traverse the array

  for (i = 0; i < SIZE - 1; i++)
  {
    for (j = 0; j < SIZE - i - 1; j++)
    {
      if (tab[j] > tab[j+1])
      {
        tmp = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = tmp;
      }
      
    }
    
  }

  printf("\n*********** array sorted in ascending order***********\n");

  //show array elements sorted
  for (i = 0; i < SIZE; i++)
  {
    printf("%4d", tab[i]);
  }
  
  
  
  
  return 0;
}