// fivonacci series
// input a number then show that series


#include<stdio.h>




int main(int argc, char const *argv[])
{
    int a,b=0,c=1,xd=0;

    printf("Ingresa un numero: ");    
    scanf("%d",&a);

    for (int i = 0; i < a; i++)
    {
        
        printf("%d ",b);
        xd=b;
        b=b+c;
        c=xd;

    }
    


    return 0;
}
    