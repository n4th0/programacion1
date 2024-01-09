#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *archivo;

    if (argv[1]==NULL){
        printf("tienes que escribir un nombre de archivo\n");
        printf("algo como : a.out hola.txt\n");
    
    }else {
        if (archivo = fopen(argv[1], "r")) {
            while (feof(archivo)==0) {
                printf("%c", getc(archivo));
            }
            fclose(archivo);
        
        }else {
            printf("name not found\n");
        }
    }
        

    return 0;
}