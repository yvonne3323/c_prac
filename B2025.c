#include <stdio.h>
//      * 
//    * * * 
//  * * * * *
//* * * * * * *
//  * * * * *
//    * * * 
//      *
void lingxing (int n)
{
    int i,j;
    int k=(n+1)/2;
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=n-2*i+1;j++)//n-2*i+1:
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-k;i>=1;i--)
    {
        for(j=1;j<=n-2*i+1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }  
}
//   *
//  ***
// *****
//  ***
//   *
void lingxing2(int n)
{
    int i,j;
    int k =(n+1)/2;
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=(n+1-2*i)/2;j++)//空格个数
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)//*个数，奇数个
        {
            printf("*");
        }
        printf("\n");//每行结束后应该换行
    }
    for(i=n-k;i>=1;i--)
    {
        for(j=1;j<=(n+1-2*i)/2;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    lingxing(7);
    lingxing2(5);
    return 0;
}