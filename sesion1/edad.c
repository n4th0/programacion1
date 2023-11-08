#include <stdio.h>
int main() {
int edad;
printf("Introduce tu edad: ");
scanf("%d", &edad);
printf("Has vivido %d segundos, aproximadamente\n", edad*365*24*60*60);
return 0;
}
