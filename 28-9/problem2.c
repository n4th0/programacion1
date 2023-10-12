#include <stdio.h>
#include <stdlib.h>
int main(){
   float practica, teorica, media;
   printf("dime la nota teorica ");
   scanf("%f", &teorica );
   if (teorica < 0 || teorica >10) {
   exit(-1); 
   }

   printf("dime la nota practica ");
   scanf("%f", &practica );
   if (practica < 0 || practica >10) {
   exit(-1); 
   }

   media = (teorica+practica)/2;
   if (media>=9) {
      printf("%f OUTSTANDING", media);
   }else if ( media>=7 && media<9) {
   
      printf("%f REMARKABLE", media);
   }else if (media >=5 && media<7) {
   
      printf("%f PASS", media);
   }else {

      printf("%f FAIL", media);
   }
}
