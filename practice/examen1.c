#include <stdio.h>

void compr(int a,int b){
   int num=0;
   if(a>b){
      for (int i = 1; i<a;i++) {
         if(a%i==0){
            num = num+i;
            printf("\n%d",i);
         }
      }

      if(num==b){
         printf("\nel número es amigo ");
      }else {
         printf("\nel número no es amigo ");
      }
   }else {
      for (int i = 1; i< b;i++) {
         if(b%i==0){
            num = num+i;
            printf("\n%d",i);
         }
      }
      if(num==a){
         printf("\nel número es amigo ");
      }else {
         printf("\nel número no es amigo ");
      }

   }
   
}

int main(){

   compr(284,  220);
    return 0;
}

