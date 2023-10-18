#include <stdio.h>
#include <stdbool.h>
int cuadrado(int num);
int main(){
  int b = cuadrado(60);
  printf("%d",b);

}
int cuadrado(int num){
int a = 0;
for (int i =1 ; i<=num; i++) {
   if(num%i==0){
      a = a+1;
   }
}
return a;
}
