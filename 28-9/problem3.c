#include <stdio.h>
#include <stdlib.h>
int main(){
   int comida, bebida, cuenta;
   printf("que quieres comer, 1pasta, 2carne o 3pescado?");
   scanf("%d", &comida);
   cuenta= 0;
   printf("que quieres beber 1 agua, 2 cerveza, 3 vino ?");
   scanf("%d", &bebida);
   switch (comida) {
      case 1: 
        cuenta = cuenta +3;
        break;
      case 2: 
        cuenta = cuenta +5;
        break;
      case 3: 
        cuenta = cuenta +7;
        break;
      default:
        printf("dame un numero de comida correcto");
        exit(-1);
   }

   switch (bebida) {
      case 1: 
        cuenta = cuenta +2;
        break;
      case 2: 
        cuenta = cuenta +3;
        break;
      case 3: 
        cuenta = cuenta +4;
        break;
      default:
        printf("dame un numero de bebida correcto");
        exit(-1);
   }
   printf("Cuenta: %d", cuenta);





}
