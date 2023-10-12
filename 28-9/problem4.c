#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(){

   int games, games_ganadosj1=0, games_ganadosj2=0;
   printf("\ndime cuantos juegos quieres jugar: ");
   scanf("%d", &games);

   while (games != 0 ) {
      //main loop del games 
      int num1, num2, crupier;
      printf("\ndime el numero del jugador 1 ");
      scanf("%d", &num1);

      printf("\ndime el numero del jugador 2 ");
      scanf("%d", &num2);
      if(num2 >100 || num2<0){
         printf("jugador uno a perdido la partida\n");
         games_ganadosj2 = 1+games_ganadosj2; 

      }else if (num1>100 || num1<0){
      
         printf("jugador dos a perdido la partida\n");
         games_ganadosj1 = 1+games_ganadosj1; 
      }else {
      srand(time(NULL));
      crupier = 1 +rand()%100;
      printf("el crupier ha sacado %d \n", crupier);

      //crear random

      int bajo1,bajo2, arriba1, arriba2;
      if (num1<crupier) {
      arriba1 = crupier-num1;
      bajo1 = num1+(100-crupier);
      }else {
      arriba1=100-num1+crupier;
      bajo1=num1-crupier;
      }

      if (num2<crupier){
         
         bajo2 = num2+(100-crupier);
         arriba2 = crupier-num2;
      } else {
         arriba2=100-num2+crupier;
         bajo2= num2-crupier;
      } 

      if(arriba1>bajo1){
      }else {
      bajo1=arriba1;
      }
      
      if (arriba2<bajo2) {
      bajo2=arriba2; 
      }
      if (bajo1<bajo2) {
         printf("ha ganado el jugador 1\n");
         games_ganadosj1 +=games_ganadosj1+1; 
      }else if(bajo2==bajo1) {
         printf("han quedado en empate\n");
      
      }else {
         printf("ha ganado el jugador 2\n");
         games_ganadosj2 =games_ganadosj2+1; 
      }
      games = games-1;
   }
   //termina el loop
   printf("el jugador 1 ha ganado: %d\n", games_ganadosj1);
   printf("el jugador 2 ha ganado: %d\n", games_ganadosj2);

   }

   if (games_ganadosj1>games_ganadosj2) {
      printf("EL JUGADOR 1 HA GANADO");
   }else if (games_ganadosj2>games_ganadosj1) {
   
      printf("EL JUGADOR 2 HA GANADO");
   }else {
      printf("HABEIS QUEDADO EMPATE");
   }
}

