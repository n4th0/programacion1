#include<stdio.h>

int main(){


    printf("dime el numero de piezas que quepan en la caja");
    int tiempoS, tiempoM1, tiempoM2, tiempoH;
    scanf("%d",&tiempoS);
    tiempoM1=tiempoS/60;
    tiempoH=tiempoM1/60;
    tiempoM2 = tiempoM1-tiempoH*60;
    tiempoS = tiempoS-tiempoM1*60;

    printf("%d horas\n",tiempoH );
    printf("%d min\n",tiempoM2 );
    printf("%d sec\n",tiempoS);


}
