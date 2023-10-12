#include <stdio.h>

int main(){
   int num,sumatorio=0;
   printf("dime un numero ");
   scanf("%d",&num);
   
   for(int i = 1; i<num; i++){
      if(num%i==0){
         printf("\n%d\n",i);
         sumatorio=sumatorio+i;

      }
   }
   if(sumatorio==num){
      printf("es perfecto\n");
   }else {
      printf("no es perfecto\n"); 
   }
}
