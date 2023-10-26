#include <stdio.h>

int menu();
double decelsafar(double a);
double defaracels(double b);
float asknumber();
int main(){
   int b;
   do {
   
      b= menu();
      switch (b) {
         case 1:

            printf("el resultado es %f",decelsafar(asknumber()));
            printf("\n");
            break;
         case 2:
            printf("el resultado es %f",defaracels(asknumber()));
            printf("\n");
            break;
         case 0:
            printf("adiós\n");
            printf("\n");
            break;
      
      }
   }while (b!=0);

   return 0;      
}

double decelsafar(double a){
   return a*1.8 +32;
}

double defaracels(double b){
   return (b-32)/1.8;
}

float asknumber(){
   float b;
   printf("dame un los grados que quieras convertir: ");
   scanf("%f",&b);
   return b;
}

int menu(){
   int i;
   do {
      printf("elige una opción\n");
      printf("1 de celsius a fahrenheit\n");
      printf("2 de fahrenheit a celsius\n");
      printf("0 exit\n");
      scanf("%d",&i);
      printf("\n");
   }while (i<0 || i>2); 
   return i;

}

