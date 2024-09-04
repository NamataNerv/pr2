//Swap variables
#include<stdio.h>


int main(int argc, char const *argv[])
{
    int a,b,c;

    printf("Ingresa a: ");
    scanf("%d",&a);
    printf("Ingresa b: ");
    scanf("%d",&b);

    //swap
    c=a;
    a=b;
    b=c;

    printf("a: %d\n",a);
    printf("b: %d",b);
    
    return 0;
}
