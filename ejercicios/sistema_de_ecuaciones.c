#include <stdio.h>
void scanner(float *num,char a){
   float d;
   printf("\ndime un número al que equivalga esta letra %c ",a);
   scanf("%f",&d);
   *num=d;
}
int main(){
   float a,b,c;
   float d,e,f,x, y;
   printf("\nax + by = c");
   printf("\ndx + ey = f");
   scanner(&a,'a');
   scanner(&b,'b');
   scanner(&c,'c');
   scanner(&d,'d');
   scanner(&e,'e');
   scanner(&f,'f');

   y=(f*a-d*c)/(a*e-b*d);
   x=(c-b*y)/a;
   printf("la solución es x = %.2f  y = %.2f",x,y);
   printf("\n");


   return 0;
}


