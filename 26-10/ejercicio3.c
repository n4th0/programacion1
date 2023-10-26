#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
      int crupier;
      srand(time(NULL));
      crupier = 1 +rand()%9;
      printf("el crupier ha sacado %d \n", crupier);
}
