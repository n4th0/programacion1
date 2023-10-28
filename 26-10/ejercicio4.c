#include <stdio.h>
char read1();
char read2();
int read3();
void draw(char c, char a, int b);

int main(){
    char volumen,letra;
    int tamaño;

    letra= read1();
    volumen= read2();
    tamaño= read3();

    draw(letra, volumen, tamaño);

    return 0;
}

char read1(){
    char b;
    printf("dime una caracter ");
    scanf("%c",&b);
    printf("\n");
    return b;

}
char read2(){
    char b;
    do {
        printf("dime un caracter R o V ");
        scanf("%c",&b);
    }while (b != 'R' && b != 'V');

//    while (b != 'R' && b != 'V'){ 
//    printf("dime un caracter R o V ");
//        scanf("%c",&b);
//    }
    return b;
}
int read3(){
    int b;
    while (b<4||b>20) {
        printf("dime un número ");
        scanf("%d",&b);
    
    }
    return b;
}

void draw(char c,char a, int b){
    if(a=='R'){
        for(int i=0;i<b;i++){
            for (int j= 0; j<b; j++) {
                printf("%c",c);
            }
            printf("\n");
        }
        printf("\nnumero de carácteres dibujado es %d", b*b);
        printf("\nel número de carácteres vacios es 0");
    }else {
        
        for (int j= 0; j<b; j++) {
            printf("%c",c);
        }
        printf("\n");
        for (int i = 0; i<b-2; i++) {
            printf("%c",c);
            for (int j=0; j<b-2; j++) {
                printf(" ");
            }
            printf("%c",c);
            printf("\n");
        }
        for (int j= 0; j<b; j++) {
            printf("%c",c);
        }
        printf("\nel número de carácteres dibujado es %d", 2*b+2*(b-1));
        printf("\nel número de carácteres vacios es %d", (b-1)*(b-1));

    }
    printf("\n");
}
