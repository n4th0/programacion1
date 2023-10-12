
#include<stdio.h>
#include<math.h>

int main(){

    float entero2;
    float flotante;
    printf("dime la cantidad de gasolina: "); 
    scanf("%f", &entero2);
    printf("dime el consumo medio: ");
    scanf("%f", &flotante); 
    float km;
    km = (entero2 / flotante) * 100;
    printf("%f", km); 
   



return 0;
}
