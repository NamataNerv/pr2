#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        for (int f = 0; f < i; f++)
        {
            printf("*");
        }
        printf("\n");
    }
    


    return 0;
}

