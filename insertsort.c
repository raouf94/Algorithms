#include<stdio.h>

int main(){

   /* here i and j for loop counters, temp for swapping
   count for total number of elements, number[] to sotre the input numbers 
   in array. */

   int i, j, count, temp, number[25];

   printf("How many numbers you are goingg to enter? : ");
   scanf("%d", &count);
   printf("Enter %d elements: ", count);

   //This loop would store the input numbers in array
   for(i=0;i<count;i++)
      scanf("%d", &number[i]);
   
   //Implementation of insertion sort algorithm
   for (i = 1; i < count; i++)
   {
      temp=number[i];
      j=i-1;
      while ((temp<number[j])&&(j>=0))
      {
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
      
   }
   printf("Order of sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);
   
   return 0;
}