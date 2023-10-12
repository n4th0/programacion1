#include <stdio.h>
#include <stdlib.h>

#include "gfx.h"

int main(){

   int type, square, rectangle_x, rectangle_y;

   printf("cuadrado 1 rectangulo 2");
   scanf("%d", &type);
   if( type == 1 ){
      printf("dime el tamaño del cuadrado ");
      scanf("%d", &square);
      if (square>300) {
         printf("dime un numero menor de 300 porfa");
         exit(-1); 
      }
      gfx_open(300,  300, "problema 1 ");
      gfx_color(000,200,100);
      gfx_line(square, square,  square,200-square);

      gfx_line(square, square,  200-square,square);
      gfx_line(square,200- square,  200-square,200-square);
      gfx_line(200-square, 200-square,  200-square,square);
      gfx_wait();


   }else if (type == 2) {
   
      printf("dime el tamaño del rectangulo x ");
      scanf("%d", &rectangle_x);

      printf("dime el tamaño del rectangulo y ");
      scanf("%d", &rectangle_y);

      if (rectangle_x>300||rectangle_y>300) {
         printf("dime un numero menor de 300 porfa");
         exit(-1); 
      }
      gfx_open(300,  300, "problema 1");

      gfx_color(000,200,100);
      gfx_line(30,30 , 30 , rectangle_y );
      gfx_line(30,30 ,rectangle_x  , 30 );
      gfx_line(30,rectangle_y , rectangle_x , rectangle_y );
      gfx_line(rectangle_x,30 , rectangle_x , rectangle_y );
      gfx_wait();
   }else {
   printf("dime un numero correcto porfa ");
   }



}
