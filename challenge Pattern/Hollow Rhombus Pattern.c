#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
        {
        k=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=10-i && k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}
