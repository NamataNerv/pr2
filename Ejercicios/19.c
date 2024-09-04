//Swap variables without a third variable
#include<stdio.h>


int main(int argc, char const *argv[])
{
    int a,b,c;

    printf("Ingresa a: ");
    scanf("%d",&a);
    printf("Ingresa b: ");
    scanf("%d",&b);

    //swap
    a=a+b;
    //printf("c: %d\n",c);

    b=a-b;
    a=a-b;

    printf("a: %d\n",a);
    printf("b: %d",b);
    
    return 0;
}