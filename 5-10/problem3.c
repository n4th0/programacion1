#include <stdio.h>

int main(){
   
   int option =0, tamaño;
   do {
      printf("\nMENU");
      printf("\n--------------------------------------------");
      printf("\n1-Figure 1");
      printf("\n2-Figure 2");
      printf("\n3-Figure 3");
      printf("\n0-Exit");
      printf("\nElige una opcion");
      scanf("%d",&option);
      printf("\nElige un tamaño ");
      scanf("%d",&tamaño);
      if (tamaño<=15 && tamaño>0) {
      

      switch (option) {
         case 1: 
            for (int i =1; i<=tamaño; i++) {
               for(int j=1;j<=tamaño-i;j++){
                  printf(" ");
                  
               }
               for (int j=1; j<=2*i-1; j++) {
                     printf("*"); 
               } 
               printf("\n");
            }
            break;
         case 2:
         for (int k=0; k<tamaño; k++) {

            for (int i =tamaño-k; i>0; i--) {
               
               printf(" ");
            }
               for (int j=0; j<tamaño; j++) {
                  printf("*"); 
               }
            printf("\n");
         }
            break;
         case 3:
            for (int i =1; i<=tamaño; i++) {
               for(int j=1;j<=tamaño-i;j++){
                  printf(" ");
                  
               }
               for (int j=1; j<=2*i-1; j++) {
                     printf("*"); 
               } 
               printf("\n");
            }
            for (int i =1; i<=tamaño; i++) {
               for (int j = 1; j<=i; j++) {
                  printf(" ");  
               }
               
               for (int j=1; j<=2*tamaño-1-i*2; j++) {
                     printf("*"); 
               } 
               printf("\n");
            }
            break;
         case 4:
            return 0;
            break;
      }
   }
   }while (option = option);







}
