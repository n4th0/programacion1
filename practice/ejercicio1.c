#include <stdio.h>
void division(int num,int num2, int *cociente,int *resto);
int main(){
   int cociente, resto;
   division(29, 2, &cociente,&resto);

   printf("cociente %d resto %d",cociente, resto);
    return 0;
}
void division(int num,int num2, int* cociente,int* resto){
   if(num2==0){
      printf("no se puede dividir entre 0");
   }else {
   int cociente1; 
   cociente1=0;
   while (num>=num2) {
      num= num-num2;
      cociente1++;
   }
   *resto= num;
   *cociente=cociente1;
   }
}

