/*PASCAL TRIANGLE 1
Given an integer N, print Pascal Triangle upto N rows.

*/

#include <stdio.h>
long fun(int y)
{
    int z;
    long result = 1;

    for( z = 1 ; z <= y ; z++ )
        result = result*z;

    return ( result );
}
int main()
{
    int x, y, z;
    printf("Input the number of rows in Pascal's triangle: ");
    scanf("%d",&y);
    for ( x = 0 ; x < y ; x++ )
    {
        for ( z = 0 ; z <= ( y - x - 2 ) ; z++ )
            printf(" ");
        for( z = 0 ; z <= x ; z++ )
            printf("%ld ",fun(x)/(fun(z)*fun(x-z)));

        printf("\n");
    }
    return 0;
}
