#include<stdio.h>
#include<math.h>



int main(){

    float alto, radio, volumen_vaso, agua_sobrante;
    printf("dime el alto: ");
    scanf("%f", &alto);
    printf("dime el radio: ");
    scanf("%f",&radio);
    volumen_vaso = (radio*radio*3.14*alto)/1000;
    float algo2, algo3;
    algo3 = 5;
    int algo = algo3/volumen_vaso;
    algo2 = algo3 - algo*volumen_vaso;
    printf("%d vasos",algo);
    printf("%f sobra",algo2);
    




return 0;
}
