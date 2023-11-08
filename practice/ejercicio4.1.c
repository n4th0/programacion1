#include <stdio.h>

void sort(int c,int d,int *a,int *b){
   if(c>d){
      *a=d;
      *b=c;
      
   }else {
      *a=c;
      *b=d;
   }

}


int main(){
   int a,b;
   sort(41823,  21432, &a, &b);

   printf("%d %d",a,b);


    return 0;
}

