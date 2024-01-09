#include <stdio.h>

void leeUsuario(int * tamaño, int *numero){
    int t,n;
    printf("dime el número del que quieres el idénticon ");
    scanf("%d",&n);
    printf("dime el tamaño del que quieres el idénticon ");
    scanf("%d",&t);

    *tamaño=t;
    *numero=n;
}

int sumDigitos(int num){
    int sum = 0;
    do {
        sum = sum +num%10;
        num = num/10;
    }while (num !=0);
    return sum;
}

void dibujaIdenticon(int tamaño, int numero){
    
    for (int i = 0; i<tamaño; i++) {
    
        for (int j = 0; j<tamaño; j++) {
            if (j==0 &&i==0 || j==tamaño-1 && i==0 ||
            j==0 &&i==tamaño-1 || j==tamaño-1 && i==tamaño-1 
            ) {
                printf("+");
            }
            else if (i==0 || i==tamaño-1) {
                printf("-");
            }
            else if (j==0|| j==tamaño-1) {
                printf("|");
            } else {
                j--;
                i--;
                if (j==0&&i==0) {
                    if(sumDigitos(numero)%2==0){
                        printf("=");
                    }else {
                        printf("%%");
                    }
                }
                else {
                    if(numero%(j+i+1)==0){
                        printf(".");
                    }else if (numero%(j+i+1)==1) {
                        printf("*");
                    }else {
                        printf("o");
                    }
                }
                j++;
                i++;
            }
        }
        printf("\n");
    }
}

int main(){

    int numero, tamaño;
    leeUsuario(&tamaño,  &numero);
    dibujaIdenticon(tamaño,  numero);
    
    return 0;
}