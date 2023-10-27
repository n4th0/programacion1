#include <stdio.h>

int asknumber();
int calculos(int a);
int main(){
   int b;
   do {
      b= calculos(asknumber());
   }while (b!=2);

   return 0;
}
// numero positivo
int asknumber(){
   int b;
   do {
      printf("\n");
      printf("dime un número");
      scanf("%d",&b);
      printf("\n");
   }while (!(b>1));
   return b;
}
int calculos(int a){
   int b =0;
   // si b = 2 es primo si no, no lo es
   for (int i = 1 ; i<=a; i++) {
      if( a%i ==0){
         printf("%d ",i);
         b++;
      }
   }
   return b;
}
