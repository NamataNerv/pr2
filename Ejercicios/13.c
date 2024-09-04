//armstrong pero en un rango de 100 numeros

#include<stdio.h>
#include<math.h>

void Armstrong(int x,int y);

int main(int argc, char const *argv[])
{
    int num,a=0,cn,b,hold;
    printf("Ingresa un numero: ");
    scanf("%d",&num);
    hold=num;
    printf("Ingresa la cantidad de digitos del numero: ");
    scanf("%d",&cn);

    for (int i = 0; i < 899; i++)
    {
    Armstrong(num+i,cn);
    }
    

    return 0;
}

void Armstrong(int x, int y)
{
    int num=x,a=0,cn=y,b,hold=x;
    for (int i = 0; i < cn; i++)
    {   
        int e=1;
        b=num%10;
        for (int i = 0; i < cn; i++)
        {
            e*=b;
        }
        a=a+e;
        num=num/10;
    }
    

    if (a==hold)
    {
        printf("\t\tEl numero %d Es un 'strong number' \n",hold);
    }
    else
    {
        //printf("%d No es un 'strong number' \n",hold);
    }
    
}