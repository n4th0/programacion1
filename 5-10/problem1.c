#include <stdio.h>
#include <stdlib.h>
#include "gfx.h"
const int margen =  100;
int main(){

   int option = 0;
   do {
   
   printf("\n--------------------------------");
   printf("\n1-cuadrado");
   printf("\n2-rectangulo");
   printf("\n3-triangulo rectangulo");
   printf("\n4-triangulo equilatero");
   printf("\n5-exit");
   int option = 0;
   float altura,base;
   printf("\ndime la opción que quieres ");
   scanf("%d",&option);
   printf("\ndime la base que debe de tener la figura ");
   scanf(" %f",&base);
   printf("\ndime la altura que debe de tener la figura ");
   scanf(" %f",&altura);

   if (base > 300 || altura>300) {
      printf("escribe una altura o base menor de 300");
      return -1;
   }
   
   switch (option) {
      case 1: 
         gfx_open( 500,  500,"titulo random");
         gfx_color(200, 000 ,  000);
         for (int i=0;base>i; i++) {
               gfx_line(margen,base+margen-i ,base+margen  ,base+margen-i  ); 
         }
         gfx_wait();
         break;
      case 2:
         gfx_open( 500,  500,"titulo random");
         gfx_color(200, 000 ,  000);
         for (int i=0;altura>i; i++) {
               gfx_line(margen,altura+margen-i ,base+margen  ,altura+margen-i  ); 
         }
         gfx_wait();
         break;
      case 3:
         gfx_open( 500,  500,"titulo random");
         gfx_color(200, 000 ,  000);
         for (int i=0;altura>i; i++) {
               gfx_line(margen,margen+altura-i ,margen+base,margen+altura ); 
         }
         gfx_wait();
         break;
      case 4:
         gfx_open( 500,  500,"titulo random");
         gfx_color(200, 000 ,  000);

         for(int i = 0;altura>i;i++){
            gfx_line(margen, altura+margen ,  margen+base/2,  altura+margen-i);
         }

         for(int i = 0;altura>i;i++){
            gfx_line(margen+base, altura+margen ,  margen+base/2,  altura+margen-i);
         }
         gfx_wait();
         break;
      case 5:
         printf("\nadiós\n");
         return 0;
         break;
      default:
         printf("escribe una opción correcta la proxima vez");
   

   }   

   }while(option=option);



}
