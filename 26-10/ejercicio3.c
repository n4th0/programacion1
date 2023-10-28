#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
// colores
#define VERDE_T        "\x1b[32m"
#define AMARILLO_T "\x1b[33m"
#define ROJO_T     "\x1b[31m"
#define BLANCO_T   "\x1b[37m"

int asknumber(){
      int b;
      printf("\n");
      printf(BLANCO_T"dime un número ");
      scanf("%d",&b);
      return b;
}
bool compgame(int j1, int j2, int j3, int num1, int num2, int num3){
      return!(j1==num1 && j2==num2 && j3==num3);
}

void compnum(int j1, int posicion, int num2, int num3){
      if(j1==posicion){
            printf(VERDE_T"verde       ");
      }
      else if(j1 == num2 || j1 == num3){
            printf(AMARILLO_T"amarillo    ");
      }
      else {
            printf(ROJO_T"rojo        ");      
      }
}


int main(){
      int num1,num2,num3,j1,j2,j3;
      bool game=true;
      srand(time(NULL));
      num1 = 1 +rand()%9;
      num2 = 1 +rand()%9;
      num3 = 1 +rand()%9;
      // para comprobar el resultado
      ///printf("%d    %d    %d", num1,num2,num3 );
      do {
            j1=asknumber();
            j2=asknumber();
            j3=asknumber();
            printf("%d    %d    %d", j1,j2,j3 );
            printf("     ");
            compnum(j1, num1, num2, num3);
            compnum(j2, num2, num1, num3);
            compnum(j3, num3, num2, num1);
            game =compgame(j1,  j2,  j3,  num1,  num2,  num3); 
      }while (game);
      printf("\n");
}
