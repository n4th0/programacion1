#include <stdio.h>

void factorial(int a, int *b){
   int d;
   if(a ==0 ){
      *b= 1;
   }else {
      factorial(a-1,&d);
      *b= a * d;
   }

}

int main(){
   int c;
   factorial(5,&c);
   printf("%d",c);

    return 0;
}

