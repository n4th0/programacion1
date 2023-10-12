#include<stdio.h>

int main(){


    int a, b, c, var;
    printf("da el valor de a ");
    
    scanf("%d",&a);
    printf("da el valor de b ");
    scanf("%d",&b);
    printf("da el valor de c ");
    scanf("%d",&c);
    var = b;
    b = c;
    c = a;
    a = var;
    
    printf("%d", a);
    printf("%d", b);
    printf("%d", c);



return 0;

}



