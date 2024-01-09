#include <stdio.h>
#include <string.h>

void ej1(char frase[60],int matriz[3][6]){
    int tamanoPalabra=0;
    int palabraContador=0;
    for (int i = 0 ; i<strlen(frase); i++) {
        if (frase[i] != *" ") {
            if (tamanoPalabra==0) {
                //inicio de palabra
                matriz[0][palabraContador]=i;
                palabraContador++;
            }
            tamanoPalabra++;
        }else {
            if(frase[i-1]!=*" " && palabraContador!=0){
                matriz[1][palabraContador-1]=i-1;
            }
            tamanoPalabra=0;
            if (palabraContador==5) {
                matriz[1][palabraContador]=strlen(frase);
            }
        }
    }
    for (int i =0; i<6; i++) {
        matriz[2][i]=-matriz[0][i]+matriz[1][i]+1;
    }
    
}
int main (){
    char frase[60];
    printf("dime una frase:");
    int matriz[3][6];   
    scanf(" %[^\n]s",frase);
    ej1(frase, matriz);

    // imprimir la matriz
    for (int j = 0; j<6; j++) {
        for (int i = 0; i<3; i++) {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    // imprime la frase
    // printf("la frase es: %s", frase);


    
}