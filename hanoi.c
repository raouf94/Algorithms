#include<stdio.h>
#include<stdlib.h>

/*
n: nombre de Disque utilisés
D: emplacement de depart
A: enmplacement d'arrivé
I: emplacement intermediaire
*/
void tourHanoi(int n, char D, char A, char I){
  if (n == 1){
    printf("Disque 1 de %c a %c \n", D, A);
  }
  else {
    tourHanoi(n-1, D, I, A);
    printf("Disque %d de %c a %c \n", n, D, A);
    tourHanoi(n-1, I, A, D);
  }

}

main() {

  int nDisque = 3;
  tourHanoi(nDisque, 'A', 'B', 'C');
  system("pause");
    
}