#include <math.h>
#include <stdio.h>

int main(){
   int numero, numero_de_digitos, auxiliardigitos;
   // se pregunta el número 

   printf("dime un numero ");
   scanf("%i",&numero);

   // se obtiene el número de digitos 
   printf("\n");
   for (int i = 1; i<=100 ; i++) {
     if (numero-pow(10, i)<0) {
            numero_de_digitos=i;
            break; 
      }
   }
   printf("numero de digitos : %d \n", numero_de_digitos);

   // esto probablemente sea innecesario pero si lo toco se rompe el código
   auxiliardigitos= numero;

   // s = 1-9
   for (int s =1 ; s<=9; s++) {
   // en el for varía el valor de la variable número por eso es necesario el volverla a "inicializar¿?"
   numero= auxiliardigitos; 
      for(int i = numero_de_digitos-1; i>=0;i--){
         // utilizando la propiedad de quitar los decimales de una división de int
         int a;
         // no se si es ilegal usar la funcion pow pero no me puede dar más igual
         a = numero/pow(10, i);
         if (s==a) {
            printf("%i",a);
         }
         // se modifica el valor de int para eliminar la cifra ya comparada
         numero = numero -a*pow(10,i);
      }   
   }
   // para que quede bonito 
   printf("\n");
}
