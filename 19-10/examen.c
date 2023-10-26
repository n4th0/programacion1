#include <stdio.h>
#include <math.h>

int calcdigits(int num){
   int b; 
   for(int i = 0;i<1000000;i++){
      if (num/pow(10,i)<1) {
         b= i;
         break;
      }
   }
   return b-1;
}

int calcdigits(int num);
int main(){
   int mult= 1;
   int numero, numaux1,numaux2;
   printf("dime un número ");
   scanf("%i",&numero);
   int digitos = calcdigits(numero);

   for (int i = 1; i<=digitos; i++) {
      if(i%2==0){
         numaux1=numero;
         numaux2=numero;
         numaux2 = -numaux1 +((numaux1/pow(10,i))*pow(10,i));
         mult=mult*numaux2;
      }
   
   }
   printf("\n el resultado es %d",mult);
   return 0;
   



}
