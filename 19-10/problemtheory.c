#include <stdio.h>
#include <stdbool.h>
bool cuadrado(int num);
int main(){
   
   if(cuadrado(6)){
      printf("verdadero");
   }else {
      printf("falso");
   }

}
bool cuadrado(int num){
   if(num<0){
      return false;
   }else {
      return true;
   }

}
