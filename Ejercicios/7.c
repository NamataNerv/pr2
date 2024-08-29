// a power to b
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,r=1;
    printf(" a^b \n");
    printf("Ingresa numero para a: ");
    scanf("%d",&a);
    printf("Ingresa numero para b: ");
    scanf("%d",&b);

    for (int i = 0; i < b; i++)
    {
        r=r*a;
    }
    printf("El resultado es: %d",r);


    

    
    return 0;
}