#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomnums(int num,int times){
   int randnum,b=0;

   srand(time(NULL));
   randnum= 1+rand()%19;
   srand(time(NULL));

   printf("rand num %d \n",randnum);


   if(randnum==num){
      return b++;

   }else {

      srand(time(NULL));
      b=1+randomnums(num,b);
      srand(time(NULL));
      return b;
   }
}

int main(){
   int b;
   b= randomnums(8,0);

   printf("%d",b);

    return 0;
}

