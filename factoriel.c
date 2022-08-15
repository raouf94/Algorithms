#include<stdio.h>

int main()
{
  int nbre, i;
  long fact = 1;

  printf("Entrez un nombre pour calculer sa factorielle \n");
  scanf("%d", &nbre);

  for (i = 1; i <= nbre; i++)
  {
    fact = fact * i;
  }
  printf("Factorielle de %d = %ld \n", nbre, fact);
 
  return 0;
}
