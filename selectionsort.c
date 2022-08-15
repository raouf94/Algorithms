#include <stdio.h>
 
int main()
{  

  /*Here i & j for loop counters, temp for swapping,
  count for total number of elements, number[] to sotre the input numbers in array.
  You can increase or decrease the size of nulber array as per requirement*/

  int i, j, tmp, count, index, tab[30];

  printf("How many numbers you are going to enter?: ");
  scanf("%d",&count);

  printf("Enter %d elements: ", count);
  //this loop would store the input numbers in array
  for(i=0;i<count;i++)
    scanf("%d",&tab[i]);
  
  for (i = 0; i < (count-1); i++)
  {
    index = i;

    for(j=i+1; j<count;j++){
      if (tab[index] > tab[j])
      {
        index = j;
      }
      
    }

    if (index != i)
      {
        tmp = tab[i];
        tab[i] = tab[index];
        tab[index] = tmp;
      }

  }

  printf("\n*********** Table sorted in growing order***************\n");
  for(i=0; i<count; i++)
    printf("%4d", tab[i]);


  return 0;
}