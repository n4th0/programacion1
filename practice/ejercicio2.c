#include <stdio.h>
void rec1(int a){
   if(a ==0){
   }else {
      printf("*");
      rec1(a-1);
   }
}
void rec3(int a){
   if (a==0) {
   }else {
      printf(" ");
      rec3(a-1);
   }
}
void rec2(int a,int b){
   if(a-1==0){

   }else {
      rec3(b/2);
      printf("*");
      printf("\n");
      rec2(a-1,b);
   }
}
int main(){
   int a,b;
   printf("dime un número\n");
   scanf("%d",&a);
   if (a>5 && a<10 && a%2!=0) {
      b=a;
      rec1(a);
      printf("\n");
      rec2(a,b);
      printf("\n");

   
   }else {
   printf("este numero está mal");
   }

    return 0;
}

