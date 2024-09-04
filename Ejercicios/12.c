// strong number 
// input number 
// oper 
// is or is not 
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int num,a=0,cn,b,hold;
    printf("Ingresa un numero: ");
    scanf("%d",&num);
    hold=num;
    printf("Ingresa la cantidad de digitos del numero: ");
    scanf("%d",&cn);
    

    for (int i = 0; i < cn; i++)
    {   
        int e=1;
        //printf("\t%d\n",num);
        b=num%10;
        for (int i = 0; i < cn; i++)
        {
            e*=b;
        }
        a=a+e;
        //printf("%d eee\n",e);
        //printf("%d\n",a);
        
        num=num/10;
    }
    

    if (a==hold)
    {
        printf("El numero Es un 'strong number' ");
        return 0;
    }
    printf("No es un 'strong number' ");
    return 0;
}
