#include <stdio.h>
int main(){
   printf("dime un número ");
   int b,count=1;
   scanf("%d",&b);
   while (b/10!=0) {
      b=b/10;
      count++;
   }
   printf("\n contador %d",count);

    return 0;
}

