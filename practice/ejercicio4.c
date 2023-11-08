#include <stdio.h>
void digits(int num,int *c){
   int b=0;
   if(num/10==0){
      *c=1;
   }else {
      digits(num/10, &b);

      b++;
      *c=b;
   }
}
int main(){
      int b;
      digits(452,&b);
      printf("%d",b);

    return 0;
}

