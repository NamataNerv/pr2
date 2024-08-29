//imprimir tabla de un numero dado

#include<stdio.h>


int main(int argc, char const *argv[])
{
    int n;
    printf("Ingresa numero: ");
    scanf("%d",&n);

    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n",n ,i+1,n*(i+1));
    }
    


    return 0;
}
